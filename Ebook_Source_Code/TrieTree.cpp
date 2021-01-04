
#include<stdio.h>
#include<stdlib.h>
#define ALPHABET 26				//���ĺ� ����(a ~ z)
#define WORD_AMOUNT 6			//�ܾ� ���� ����
#define MAX_WORD_LENGTH 20		//�ܾ� ���� ����

typedef struct TRIE {
	int alphabet[ALPHABET];     //0��° �ε����� a, 25��° �ε����� z�� ����
	TRIE* next[ALPHABET];       //����ü�� �迭�� ����
}TRIE;

//Ʈ���� Ʈ�� �ʱ�ȭ
void inittrie(TRIE* trie) {
	for (int i = 0; i < ALPHABET; i++) {
		trie->alphabet[i] = 0;
		trie->next[i] = NULL;
	}
}

//Ʈ���� Ʈ�� ����
void trietree(TRIE* trie, char wordset[WORD_AMOUNT][MAX_WORD_LENGTH]) {
	int currword = 0;          //�ܾ��� ����
	int currlength = 0;        //�� �ܾ��� �ε���
	TRIE* current;			   //���� ��� ����
	//�ܾ �ִ� ��ŭ �ݺ�
	while (wordset[currword][currlength] != NULL) {
		//���ο� �ܾ�� �Ѿ ������ �����带 �ʱ�ȭ 
		current = trie;
		//���ڿ��� �������� \0�� ����ǹǷ� \0�� ������ ������ �ݺ��ϸ� �ܾ� ��ü ���� ����
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
		printf("%s�� �����ϴ� ���ڿ�\n", word);
	else
		printf("%s�� �������� �ʴ� ���ڿ�\n", word);
}

int main() {
	TRIE* trie = (TRIE*)malloc(sizeof(TRIE));
	char wordset[WORD_AMOUNT][MAX_WORD_LENGTH] = {"tree","trie","segment","stack",
					"backtracking","binary"};
	char word[MAX_WORD_LENGTH];
	inittrie(trie);
	trietree(trie, wordset);
	printf("ã�� ���ڿ� �Է� (�ִ� ���� %d) : ", MAX_WORD_LENGTH);
	gets_s(word);
	findword(trie, word);
}