
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {
	char data;
	int visited;
	struct TNODE* Lchild;
	struct TNODE* Rchild;
}TNODE;

int main() {
	//백트래킹을 위한 예제이므로
	//단순한 트리 구조 생성
	TNODE Dnode = { 'D',0,NULL,NULL };     //        A
	TNODE Cnode = { 'C',0,NULL,NULL };     //      B
	TNODE Bnode = { 'B',0,&Cnode,&Dnode }; //    C   D  
	TNODE Anode = { 'A',0,&Dnode,NULL };

}
