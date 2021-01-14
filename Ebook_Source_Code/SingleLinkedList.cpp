/*
#include<stdio.h>
#include<malloc.h>

typedef struct NODE{		//��� ����ü ����
	int data;				//����ü�� ��
	struct NODE* next;		//���� ����ü�� ����Ű�� ����
}NODE;

void addnode(NODE* n, int d) {		//�ڿ� ��� �߰�
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	while (n->next != NULL) {		//���� �� ������ �̵�
		n = n->next;
	}
	n->next = temp;
}

void deletenode(NODE* n, int d) {		//���ϴ� ��� ����
	NODE* delnode;
	if (n->next == NULL) {
		printf("���� ����Ʈ\n");
	}
	else {
		while (n->next != NULL) {
			//���� ��尡 ���� ����� �� ���� ����
			//���� ����� ���� ��带 �����Ű��
			//���� ��带 ������Ŵ(�����Ҵ��̱� ������)
			if ((n->next)->data == d) {
				delnode = n->next;
				n->next = n->next->next;
				free(delnode);
				return;
			}
			//���� ��尡 ���� ��尡 �ƴϸ� �̵�
			n = n->next;
		}
		printf("�ش� ��� ����\n");
	}
}

void printnode(NODE* n) {     //����Ʈ ���
	if (n->next == NULL) {
		printf("���� ����Ʈ\n");
	}
	else {
		printf("���� ���� ����Ʈ = ");
		n = n->next;
		while (n != NULL) {
			printf("%d  ", n->data);
			n = n->next;
		}
		printf("\n");
	}
}

int main(void) {
	//���� ���(Head ���) ����
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->data = NULL;		//���� ���(Head ���) �ʱ�ȭ
	head->next = NULL;
	deletenode(head, 10);
	addnode(head, 10);
	addnode(head, 20);
	printnode(head);
	deletenode(head, 10);
	printnode(head);
	deletenode(head, 30);
	return 0;
}
*/
