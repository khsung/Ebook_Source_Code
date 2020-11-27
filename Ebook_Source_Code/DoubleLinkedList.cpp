/*
#include<stdio.h>
#include<malloc.h>

typedef struct NODE {         //노드 구조체 선언
	int data;
	struct NODE* prev;
	struct NODE* next;
}NODE;

void addnode(NODE* n, int d) {       //뒤에 노드 추가
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	while (n->next != NULL) {
		n = n->next;
	}
	n->next = temp;
	temp->prev = n;
}

void deletenode(NODE* n, int d) {     //원하는 노드 삭제
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
	printf("해당 노드 없음\n");
}

void printnode(NODE* n) {     //리스트 출력
	if (n->next == NULL) {
		printf("공백 리스트\n");
	}
	else {
		printf("단일 연결 리스트 = ");
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