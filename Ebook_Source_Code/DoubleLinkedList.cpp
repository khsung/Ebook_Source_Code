/*
#include<stdio.h>
#include<malloc.h>

typedef struct NODE {			//노드 구조체 선언
	int data;					//노드 키값
	struct NODE* prev;			//앞 노드
	struct NODE* next;			//뒤 노드
}NODE;

void addnode(NODE* n, int d) {       //끝에 노드 추가
	//추가할 노드 초기화
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	while (n->next != NULL) {
		n = n->next;
	}
	//기존 끝 노드와 추가할 노드 연결
	n->next = temp;
	temp->prev = n;
}

void deletenode(NODE* n, int d) {     //원하는 노드 삭제
	NODE* delnode;
	if (n->next == NULL) {
		printf("공백 리스트\n");
	}
	else {
		while (n->next != NULL) {
			//다음 노드가 지울 노드일 때
			if ((n->next)->data == d) {
				//다음 노드가 마지막 노드일 때 노드해제
				if (n->next->next == NULL) {
					delnode = n->next;
					n->next = NULL;
					free(delnode);
					return;
				}
				//다음 노드가 마지막 노드가 아닐 때
				//현재 노드와 다음 노드의 다음 노드를
				//서로 연결시켜주고 다음 노드 해제
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
		printf("해당 노드 없음\n");
	}
}

void printnode(NODE* n) {     //리스트 출력
	if (n->next == NULL) {
		printf("공백 리스트\n");
	}
	else {
		printf("이중 연결 리스트 = ");
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
