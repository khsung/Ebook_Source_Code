/*
#include<stdio.h>
#include<malloc.h>

typedef struct NODE {         //��� ����ü ����
	int data;
	struct NODE* prev;
	struct NODE* next;
}NODE;

void addnode(NODE* n, int d) {       //�ڿ� ��� �߰�
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	while (n->next != NULL) {
		n = n->next;
	}
	n->next = temp;
	temp->prev = n;
}

void deletenode(NODE* n, int d) {     //���ϴ� ��� ����
	NODE* delnode;
	while (n->next != NULL) {
		if ((n->next)->data == d) {
			delnode = n->next;
			n->next = n->next->next;
			free(delnode);
			return;
		}
		n = n->next;
	}
	printf("�ش� ��� ����\n");
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
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->data = NULL;
	head->next = NULL;
	printnode(head);
	addnode(head, 10);
	addnode(head, 20);
	printnode(head);
	deletenode(head, 10);
	printnode(head);
	deletenode(head, 30);
	return 0;
}
*/