/*
#include <stdio.h>
#include <malloc.h>

typedef struct NODE {     //노드 구조체 선언
	int data;
	struct NODE* next;
}NODE;

void addnode(NODE* n, int d) {     //뒤에 노드 추가
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

void deletenode(NODE* n, int d) {     //원하는 노드 삭제
	NODE* delnode;
	NODE* curr = n;
	NODE* temp;
	if (n->next == NULL) {
		printf("공백리스트\n");
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
		printf("해당노드없음\n");
	}
}

void printnode(NODE* n) {     //원형 리스트 출력
	NODE* curr = n;
	if (n->next == NULL) {
		printf("공백 리스트\n");
	}
	else {
		printf("원형연결 리스트 = ");
		do {
			curr = curr->next;
			printf("%d  ", curr->data);
		} while (curr->next != n->next);
		printf("  다음 노드 -> %d\n",curr->next->data);
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