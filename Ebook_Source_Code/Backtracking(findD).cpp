
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {
	char data;
	int visited;
	struct TNODE* Lchild;
	struct TNODE* Rchild;
}TNODE;

int main() {
	//��Ʈ��ŷ�� ���� �����̹Ƿ�
	//�ܼ��� Ʈ�� ���� ����
	TNODE Dnode = { 'D',0,NULL,NULL };     //        A
	TNODE Cnode = { 'C',0,NULL,NULL };     //      B
	TNODE Bnode = { 'B',0,&Cnode,&Dnode }; //    C   D  
	TNODE Anode = { 'A',0,&Dnode,NULL };

}
