#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {
	int data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

void addnode(TNODE** t,int d) {
	TNODE* temp = (TNODE*)malloc(sizeof(TNODE));
	TNODE* curr=*t;
	temp->data = d;
	temp->left = NULL;
	temp->right = NULL;
	if (curr == NULL) {
		(*curr) = *temp;
		printf("루트 완료\n");
	}
	else {
		while (true) {
			if (curr->data > temp->data) {
				if (curr->left == NULL) {
					curr->left = temp;
					printf("왼쪽자식 삽입\n");
					break;
				}
				else {
					curr = curr->left;
				}
			}
			else {
				if (curr->right == NULL) {
					curr->right = temp;
					printf("오른쪽자식 삽입\n");
					break;
				}
				else {
					curr = curr->right;
				}
			}
		}
	}
}

int main() {
	TNODE* root= NULL;
	addnode(&root, 3);
	addnode(&root, 1);
	addnode(&root, 5);
	//printf("%d", root->data);
	//printf("%s", root->left);
}