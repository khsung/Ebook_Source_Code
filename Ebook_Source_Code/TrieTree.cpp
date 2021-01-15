
#include<stdio.h>
#include<stdlib.h>
#define ALPHABET 26				//���ĺ� ����(a ~ z)
#define WORD_AMOUNT 7			//�ܾ� ���� ����
#define MAX_WORD_LENGTH 20		//�ܾ� ���� ����

typedef struct TRIE {
	TRIE* next[ALPHABET];       //����ü�� �迭�� ����
}TRIE;							//0��° �ε����� a, 25��° �ε����� z�� �ǹ�

//Ʈ���� Ʈ�� �ʱ�ȭ
void inittrie(TRIE* trie) {
	for (int i = 0; i < ALPHABET; i++) {
		trie->next[i] = NULL;
	}
}

//Ʈ���� Ʈ�� ����
void trietree(TRIE* trie, char wordset[WORD_AMOUNT][MAX_WORD_LENGTH]) {
	int currword = 0;          //�ܾ��� ����, �� ��° �ܾ�����(0��° �ܾ� ���� ����)
	int currlength = 0;        //�� �ܾ��� �ε���
	TRIE* current;			   //���� ��� ����

	//�ܾ �ִ� ��ŭ �ݺ�
	while (currword < WORD_AMOUNT && wordset[currword][currlength] != NULL) {
		//���ο� �ܾ�� �Ѿ ������ �����带 �ֻ��� ���� �ʱ�ȭ 
		current = trie;
		//���ڿ��� �������� \0�� ����ǹǷ� \0�� ������ ������ �ݺ��ϸ� �ܾ� ��ü ���� ����
		while (wordset[currword][currlength] != '\0') {
			//�ش� ���ĺ��� ���� ����ü ��尡 NULL�� ��� �ʱ�ȭ�� ��带 ����
			if ((current!=NULL) && (current->next[wordset[currword][currlength]-'a']==NULL)){
				TRIE* nextnode = (TRIE*)malloc(sizeof(TRIE));
				inittrie(nextnode);
				current->next[wordset[currword][currlength] - 'a'] = nextnode;
				current = current->next[wordset[currword][currlength] - 'a'];
			}
			//�ش� ���ĺ��� ���� ����ü ��尡 NULL�� �ƴ� ���
			else {
				if (current != NULL)
					//���� ���� �̵�
					current = current->next[wordset[currword][currlength] - 'a'];
			}
			//���� ���ĺ����� �̵�
			currlength++;
		}
		//���� �ܾ��� ù ��° ���ĺ����� �̵�
		currword++;
		currlength = 0;
	}
}

void findword(TRIE* trie, char word[]) {
	TRIE* current = trie;
	int currentindex = 0;
	bool check = true;    //�����ϴ� ���ڿ����� üũ�ϴ� ����
	//ã�� ���ڿ��� ��ü�� �ݺ�
	while (word[currentindex] != '\0') {
		//�ش� ���ĺ��� ���� ����ü�� NULL�� ��� �������� �ʴ� ���ڿ��� �Ǵ�
		if (current->next[word[currentindex] - 'a'] == NULL) {
			check = false;
			break;
		}
		//�ش� ���ĺ��� ���� ����ü�� NULL�� �ƴ� ��� ���� ���ĺ����� �̵�
		else {
			current = current->next[word[currentindex] - 'a'];
		}
		currentindex++;
	}
	if (check == true)
		printf("%s�� �����ϴ� ���ڿ�\n\n", word);
	else
		printf("%s�� �������� �ʴ� ���ڿ�\n\n", word);
}

int main() {
	TRIE* trie = (TRIE*)malloc(sizeof(TRIE));
	char wordset[WORD_AMOUNT][MAX_WORD_LENGTH] = {"tree","trie","trim","steel","stack",
					"bind","bin"};
	char word[MAX_WORD_LENGTH];

	int tempindex = 0;
	printf("�����ϴ� ���ڿ� : ");
	for (int i = 0; i < WORD_AMOUNT; i++) {
		while (wordset[i][tempindex] != '\0') {
			printf("%c", wordset[i][tempindex]);
		}
		printf(", ");
	}
		inittrie(trie);
	trietree(trie, wordset);
	for (int i = 0; i < 3; i++) {
		printf("ã�� ���ڿ� �Է� (�ִ� ���� %d) : ", MAX_WORD_LENGTH);
		gets_s(word);
		findword(trie, word);
	}
}
