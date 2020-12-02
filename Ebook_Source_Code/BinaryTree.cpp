
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE{
	int data;
	struct TNODE* right;
	struct TNODE* left;
}TNODE;

void inittree(TNODE* t, int d) {
	t->left = t->left = NULL;
	t->data = d;
}

void insertnode(TNODE* t, int d) {
	if (t->data > d) {
		if (t->left == NULL) {
			TNODE* temp = (TNODE*)malloc(sizeof(TNODE));
			temp->left = NULL;
			temp->right = NULL;
			temp->data = d;
			t->left = temp;
			printf("=====");
		}
		else {
			insertnode(t->left, d);
		}
	}
	else {
		if (t->right == NULL) {
			TNODE* temp1 = (TNODE*)malloc(sizeof(TNODE));
			temp1->left = NULL;
			temp1->right = NULL;
			temp1->data = d;
			t->right = temp1;
		}
		else {
			insertnode(t->right, d);
		}
	}
}
int main() {
	TNODE* root = (TNODE*)malloc(sizeof(TNODE));
	inittree(root,3);
	insertnode(root, 1);
	insertnode(root, 5);
	printf("%d   ", root->data);
	printf("%d   ", root->left->data);
	printf("%d   ", root->right->data);
}
