
#include<stdio.h>
#include<stdlib.h>
#define ALPHABET 26				//알파벳 개수(a ~ z)
#define WORD_AMOUNT 7			//단어 개수 선언
#define MAX_WORD_LENGTH 20		//단어 길이 선언

typedef struct TRIE {
	TRIE* next[ALPHABET];       //구조체를 배열로 선언
}TRIE;							//0번째 인덱스는 a, 25번째 인덱스는 z를 의미

//트라이 트리 초기화
void inittrie(TRIE* trie) {
	for (int i = 0; i < ALPHABET; i++) {
		trie->next[i] = NULL;
	}
}

//트라이 트리 생성
void trietree(TRIE* trie, char wordset[WORD_AMOUNT][MAX_WORD_LENGTH]) {
	int currword = 0;          //단어의 순서, 몇 번째 단어인지(0번째 단어 부터 시작)
	int currlength = 0;        //각 단어의 인덱스
	TRIE* current;			   //현재 노드 선언

	//단어가 있는 만큼 반복
	while (currword < WORD_AMOUNT && wordset[currword][currlength] != NULL) {
		//새로운 단어로 넘어갈 때마다 현재노드를 최상위 노드로 초기화 
		current = trie;
		//문자열의 마지막엔 \0가 저장되므로 \0를 만나기 전까지 반복하면 단어 전체 접근 가능
		while (wordset[currword][currlength] != '\0') {
			//해당 알파벳의 다음 구조체 노드가 NULL인 경우 초기화한 노드를 연결
			if ((current!=NULL) && (current->next[wordset[currword][currlength]-'a']==NULL)){
				TRIE* nextnode = (TRIE*)malloc(sizeof(TRIE));
				inittrie(nextnode);
				current->next[wordset[currword][currlength] - 'a'] = nextnode;
				current = current->next[wordset[currword][currlength] - 'a'];
			}
			//해당 알파벳의 다음 구조체 노드가 NULL이 아닌 경우
			else {
				if (current != NULL)
					//다음 노드로 이동
					current = current->next[wordset[currword][currlength] - 'a'];
			}
			//다음 알파벳으로 이동
			currlength++;
		}
		//다음 단어의 첫 번째 알파벳으로 이동
		currword++;
		currlength = 0;
	}
}

void findword(TRIE* trie, char word[]) {
	TRIE* current = trie;
	int currentindex = 0;
	bool check = true;    //존재하는 문자열인지 체크하는 변수
	//찾을 문자열의 전체를 반복
	while (word[currentindex] != '\0') {
		//해당 알파벳의 다음 구조체가 NULL인 경우 존재하지 않는 문자열로 판단
		if (current->next[word[currentindex] - 'a'] == NULL) {
			check = false;
			break;
		}
		//해당 알파벳의 다음 구조체가 NULL이 아닌 경우 다음 알파벳으로 이동
		else {
			current = current->next[word[currentindex] - 'a'];
		}
		currentindex++;
	}
	if (check == true)
		printf("%s는 존재하는 문자열\n\n", word);
	else
		printf("%s는 존재하지 않는 문자열\n\n", word);
}

int main() {
	TRIE* trie = (TRIE*)malloc(sizeof(TRIE));
	char wordset[WORD_AMOUNT][MAX_WORD_LENGTH] = {"tree","trie","trim","steel","stack",
					"bind","bin"};
	char word[MAX_WORD_LENGTH];

	int tempindex = 0;
	printf("존재하는 문자열 : ");
	for (int i = 0; i < WORD_AMOUNT; i++) {
		while (wordset[i][tempindex] != '\0') {
			printf("%c", wordset[i][tempindex]);
		}
		printf(", ");
	}
		inittrie(trie);
	trietree(trie, wordset);
	for (int i = 0; i < 3; i++) {
		printf("찾을 문자열 입력 (최대 길이 %d) : ", MAX_WORD_LENGTH);
		gets_s(word);
		findword(trie, word);
	}
}
