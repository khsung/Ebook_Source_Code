/*
#include <stdio.h>
#include <malloc.h>

typedef struct NODE {		//��� ����ü ����
	int data;				//����� Ű ��
	struct NODE* next;		//���� ���
}NODE;

void addnode(NODE* n, int d) {     //���� ��� �߰�
	//�߰��� ��� �ʱ�ȭ
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* curr = n;
	temp->data = d;
	temp->next = NULL;
	//���� ����� �� ��带 �߰��ϰ� �ڱ� �ڽ��� ����Ŵ
	if (n->next == NULL) {
		n->next = temp;
		temp->next = n->next;
	}
	else {
		//�����̱� ������ ���� ���� ���� �̵��ϰ�
		//��� ����� ���� ��带 ����Ű�� ������ �ݺ�
		do {
			curr = curr->next;
		} while (curr->next != n->next);
		curr->next = temp;
		temp->next = n->next;
	}
}

void deletenode(NODE* n, int d) {     //���ϴ� ��� ����
	NODE* delnode;
	NODE* curr = n;
	NODE* temp;
	if (n->next == NULL) {
		printf("���鸮��Ʈ\n");
	}
	else {
		do {
			if (curr->next->data == d) {
				delnode = curr->next;
				//��尡 �ڱ� �ڽ��� ����ų ��
				//�� ��� ��带 ������ ��尡 �Ѱ��� ��
				if (delnode->next == delnode) {
					n->next = NULL;
					free(delnode);
					return;
				}
				else {
					//���� ��尡 ��� ��� ���� ����� ��
					if (delnode == n->next) {
						temp = n;
						//�� ����� ���� ��带
						//���� ����� ���� ���� ����
						do {
							temp = temp->next;
						} while (temp->next != n->next);
						temp->next = delnode->next;
						n->next = delnode->next;
						free(delnode);
						return;
					}
					else {
						curr->next = curr->next->next;
						free(delnode);
						return;
					}
				}
			}
			curr = curr->next;
		} while (curr->next != n->next);
		printf("�ش������\n");
	}
}

void printnode(NODE* n) {     //���� ����Ʈ ���
	NODE* curr = n;
	if (n->next == NULL) {
		printf("���� ����Ʈ\n");
	}
	else {
		printf("�������� ����Ʈ = ");
		do {
			curr = curr->next;
			printf("%d  ", curr->data);
		} while (curr->next != n->next);
		printf("  ���� ��� -> %d\n",curr->next->data);
	}
}

int main(void) {
	//��� ��� �ʱ�ȭ
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->data = NULL;
	head->next = NULL;
	addnode(head, 10);
	addnode(head, 20);
	addnode(head, 30);
	printnode(head);
	deletenode(head, 10);
	printnode(head);
	deletenode(head, 10);
	deletenode(head, 30);
	printnode(head);
	return 0;
}
*/
