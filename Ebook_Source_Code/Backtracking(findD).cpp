/*
//Ʈ�� �湮 ��Ʈ��ŷ ����
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {			//Ʈ�� ��� ����ü ����
	char data;
	int visited;				//�湮�� ������� üũ�ϴ� ����
	struct TNODE* Lchild;		//���� �ڽ�
	struct TNODE* Rchild;		//������ �ڽ�
}TNODE;

//���ϴ� ���Ҹ� ã�� ���� ���� �ڽĳ����� Ž��
//��;˰������� ������ ���� �켱 Ž��
void BacktrackingFindAnswer(TNODE root, TNODE node, char answer) {
	printf("���� ����� ������ : %c\n", node.data);
	if (node.data == answer) {
		printf("������ %c ã��\n", answer);
		return;
	}
	else {
		//��Ʈ ��忡�� Ž�� ������ ���� �ڽĺ��� Ž��
		if (node.Lchild != NULL && node.Lchild -> visited == 0) {
			BacktrackingFindAnswer(root, *node.Lchild, answer);
		}
		//Ž�� ������ ���� �ڽĳ�尡 ���� ��� ������ �ڽ� Ž��
		if (node.Rchild != NULL && node.Rchild -> visited == 0) {
			BacktrackingFindAnswer(root, *node.Rchild, answer);
		}
		//Ž�������� �ڽĳ�尡 ���� ��� �湮�Ϸ��̹Ƿ�
		//visited 1�� ����
		node.visited = 1;
	}
}

int main() {
	//��Ʈ��ŷ�� ���� �����̹Ƿ�
	//�ܼ��� Ʈ�� ���� ����
	//���� ��带 ��������� ���� �����ϹǷ� 
	//���� �� �ڽĳ����� ����
	TNODE Dnode = { 'D', 0, NULL, NULL };     //        A
	TNODE Cnode = { 'C', 0, NULL, NULL };     //      B
	TNODE Bnode = { 'B', 0, &Cnode, &Dnode }; //    C   D  
	TNODE Anode = { 'A', 0, &Bnode, NULL };
	char answer = 'D';
	BacktrackingFindAnswer(Anode, Anode, answer);
}

*/