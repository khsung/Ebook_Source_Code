
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {
	char data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

TNODE* root;

void init() {
	root = NULL;
}

void addnode(int data) {
	TNODE* curr;
	curr = root;
	TNODE* node = (TNODE*)malloc(sizeof(TNODE));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	if (root == NULL) {
		root = node;
	}
	else {
		while (true) {
			if (curr->data < node->data) {
				if (curr->right == NULL) {
					curr->right = node;
					break;
				}
				else {
					curr = curr->right;
				}
			}
			else {
				if (curr->left == NULL) {
					curr->left = node;
					break;
				}
				else {
					curr = curr->left;
				}
			}
		}
	}
}

void deletenode(int data) {
	TNODE* curr;
	TNODE* temp;
	curr = root;
	if (curr == NULL) {
		printf("공백 이진 트리\n");
	}
	else {
		while (true) {
			if (curr->data < data) {
				if (curr->right == NULL) {
					printf("%d 에 해당하는 원소 없음\n", data);
					break;
				}
				else {
					curr = curr->right;
				}
			}
			else if (curr->data > data) {
				if (curr->left == NULL) {
					printf("%d 에 해당하는 원소 없음\n",data);
					break;
				}
				else {
					curr = curr->left;
				}
			}
			//원소 찾았을 때
			else {
				if (curr->left == NULL && curr->right == NULL) {
					free(curr);
					break;
				}
				else if (curr->left == NULL) {
					temp = curr;
					curr = curr->right;
					while (curr->left != NULL) {
						curr = curr->left;
					}
					temp->data = curr->data;
					free(curr);
					break;
				}
				else {
					temp = curr;
					curr = curr->left;
					while (curr->right != NULL) {
						curr = curr->right;
					}
					temp->data = curr->data;
					free(curr);
					break;
				}
			}
		}
	}
}

void printtree() {
	TNODE* curr;
	curr = root;
	while (curr!=NULL) {
		printf("%d  ", curr->data);
		curr = curr->right;
	}
	printf("\n");
}

int main() {
	init();
	addnode(2);
	addnode(1);
	addnode(3);
	addnode(4);
	printtree();
	deletenode(5);
	printtree();
}