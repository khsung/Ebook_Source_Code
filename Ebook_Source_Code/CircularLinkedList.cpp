/*
#include <stdio.h>
#include <malloc.h>

typedef struct NODE {     //��� ����ü ����
	int data;
	struct NODE* next;
}NODE;

void addnode(NODE* n, int d) {     //�ڿ� ��� �߰�
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* curr = n;
	temp->data = d;
	temp->next = NULL;
	if (n->next == NULL) {
		n->next = temp;
		temp->next = n->next;
	}
	else {
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
				if (delnode->next == delnode) {
					n->next = NULL;
					free(delnode);
					return;
				}
				else {
					if (delnode == n->next) {
						temp = n;
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