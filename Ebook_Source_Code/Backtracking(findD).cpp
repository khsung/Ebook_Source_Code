
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char data;
	int visited;
	struct TNODE* Lchild;
	struct TNODE* Rchild;
}TNODE;

int main() {
	TNODE* Anode=(TNODE*)malloc(sizeof(TNODE));
	TNODE* Bnode = (TNODE*)malloc(sizeof(TNODE));
	//TNODE* Cnode = (TNODE*)malloc(sizeof(TNODE));
	//TNODE* Dnode = (TNODE*)malloc(sizeof(TNODE));
	Anode->data = 'A';
	Anode->Lchild = NULL;
	Anode->Rchild = NULL;
	Anode->visited = 0;
	Bnode->data = 'B';
	Bnode->Lchild = NULL;
	Bnode->Rchild = NULL;
	Bnode->visited = 0;
	//Anode->Lchild = Bnode;
	//Bnode->data = 'B';
	//Bnode->Lchild = Cnode;
	//Cnode->data = 'C';
	//Bnode->Rchild = Dnode;
	//Dnode->data = 'D';
	printf(Anode->data);
}