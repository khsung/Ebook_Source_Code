/*

#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {
	int data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

typedef struct TREE {
	TNODE* root;
}TREE;


void addnode(TREE* r,int d) {
	TNODE* temp = (TNODE*)malloc(sizeof(TNODE));
	if (r->root == NULL) {
		r->root = temp;
		temp->left = NULL;
		temp->right = NULL;
		temp->data = d;
	}
}

int main() {
	TREE* root;
	root->root = NULL;

}
*/