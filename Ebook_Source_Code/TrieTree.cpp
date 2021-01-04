
#include<stdio.h>
#include<stdlib.h>
#define ALPHABET 26				//알파벳 개수(a ~ z)
#define WORD_AMOUNT 6			//단어 개수 선언
#define MAX_WORD_LENGTH 20		//단어 길이 선언

typedef struct TRIE {
	int alphabet[ALPHABET];     //0번째 인덱스는 a, 25번째 인덱스는 z를 뜻함
	TRIE* next[ALPHABET];       //구조체를 배열로 선언
}TRIE;

//트라이 트리 초기화
void inittrie(TRIE* trie) {
	for (int i = 0; i < ALPHABET; i++) {
		trie->alphabet[i] = 0;
		trie->next[i] = NULL;
	}
}

//트라이 트리 생성
void trietree(TRIE* trie, char wordset[WORD_AMOUNT][MAX_WORD_LENGTH]) {
	int currword = 0;          //단어의 순서
	int currlength = 0;        //각 단어의 인덱스
	TRIE* current;			   //현재 노드 선언
	//단어가 있는 만큼 반복
	while (wordset[currword][currlength] != NULL) {
		//새로운 단어로 넘어갈 때마다 현재노드를 초기화 
		current = trie;
		//문자열의 마지막엔 \0가 저장되므로 \0를 만나기 전까지 반복하면 단어 전체 접근 가능
		while (wordset[currword][currlength] != '\0') {
			if ((current!=NULL)&&(current->alphabet[wordset[currword][currlength]-'a']==0)){
				current->alphabet[wordset[currword][currlength] - 'a'] = 1;
				TRIE* nextnode = (TRIE*)malloc(sizeof(TRIE));
				inittrie(nextnode);
				current->next[wordset[currword][currlength] - 'a'] = nextnode;
				current = current->next[wordset[currword][currlength] - 'a'];
			}
			else {
				if(current != NULL)
					current = current->next[wordset[currword][currlength] - 'a'];
			}
			currlength++;
		}
		currword++;
		currlength = 0;
	}
}

void findword(TRIE* trie, char word[]) {
	TRIE* current = trie;
	int currentindex = 0;
	bool check = true;
	while (word[currentindex] != '\0') {
		if (current->alphabet[word[currentindex] - 'a'] != 1) {
			check = false;
			break;
		}
		else {
			current = current->next[word[currentindex] - 'a'];
		}
		currentindex++;
	}
	if (check == true)
		printf("%s는 존재하는 문자열\n", word);
	else
		printf("%s는 존재하지 않는 문자열\n", word);
}

int main() {
	TRIE* trie = (TRIE*)malloc(sizeof(TRIE));
	char wordset[WORD_AMOUNT][MAX_WORD_LENGTH] = {"tree","trie","segment","stack",
					"backtracking","binary"};
	char word[MAX_WORD_LENGTH];
	inittrie(trie);
	trietree(trie, wordset);
	printf("찾을 문자열 입력 (최대 길이 %d) : ", MAX_WORD_LENGTH);
	gets_s(word);
	findword(trie, word);
}