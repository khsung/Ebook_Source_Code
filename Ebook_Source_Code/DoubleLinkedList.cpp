/*
#include<stdio.h>
#include<malloc.h>

typedef struct NODE {			//��� ����ü ����
	int data;					//��� Ű��
	struct NODE* prev;			//�� ���
	struct NODE* next;			//�� ���
}NODE;

void addnode(NODE* n, int d) {       //���� ��� �߰�
	//�߰��� ��� �ʱ�ȭ
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	while (n->next != NULL) {
		n = n->next;
	}
	//���� �� ���� �߰��� ��� ����
	n->next = temp;
	temp->prev = n;
}

void deletenode(NODE* n, int d) {     //���ϴ� ��� ����
	NODE* delnode;
	if (n->next == NULL) {
		printf("���� ����Ʈ\n");
	}
	else {
		while (n->next != NULL) {
			//���� ��尡 ���� ����� ��
			if ((n->next)->data == d) {
				//���� ��尡 ������ ����� �� �������
				if (n->next->next == NULL) {
					delnode = n->next;
					n->next = NULL;
					free(delnode);
					return;
				}
				//���� ��尡 ������ ��尡 �ƴ� ��
				//���� ���� ���� ����� ���� ��带
				//���� ��������ְ� ���� ��� ����
				else {
					delnode = n->next;
					n->next = n->next->next;
					n->next->prev = n;
					free(delnode);
					return;
				}				
			}
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
		while (n->next != NULL) {
			printf("%d  ", n->next->data);
			n = n->next;
		}
		printf("\n");
	}
}

int main(void) {
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->data = NULL;
	head->prev=head->next = NULL;
	printnode(head);
	addnode(head, 10);
	addnode(head, 20);
	addnode(head, 30);
	printnode(head);
	deletenode(head, 20);
	printnode(head);
	deletenode(head, 20);
	deletenode(head, 10);
	printnode(head);
	deletenode(head, 30);
	printnode(head);
	return 0;
}
*/
