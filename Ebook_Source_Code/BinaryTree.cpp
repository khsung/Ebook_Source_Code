/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {
	int data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

void addnode(TNODE* t) {
	if (t == NULL) {
		TNODE* temp = (TNODE*)malloc(sizeof(TNODE));
		temp->data = 1;
		temp->left = NULL;
		temp->right = NULL;
		*t = *temp;
	}
	else {
		printf("Not NULL\n");
	}
}

void testaddnode(TNODE* t) {
	if (t == NULL) {
		printf("NULL\n");
	}
	else {
		printf("Not NULL\n");
	}
}

int main() {
	TNODE* root=NULL;
	//printf("%s", &root);
	addnode(root);
	testaddnode(root);
	//printf("%d", root->data);
}
*/