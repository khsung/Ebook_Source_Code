/*
#include<stdio.h>
#include<malloc.h>

typedef struct NODE{		//노드 구조체 선언
	int data;				//구조체의 값
	struct NODE* next;		//다음 구조체를 가리키는 변수
}NODE;

void addnode(NODE* n, int d) {		//뒤에 노드 추가
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = d;
	temp->next = NULL;
	while (n->next != NULL) {		//가장 끝 노드까지 이동
		n = n->next;
	}
	n->next = temp;
}

void deletenode(NODE* n, int d) {		//원하는 노드 삭제
	NODE* delnode;
	if (n->next == NULL) {
		printf("공백 리스트\n");
	}
	else {
		while (n->next != NULL) {
			//다음 노드가 지울 노드일 때 현재 노드와
			//다음 노드의 다음 노드를 연결시키고
			//다음 노드를 해제시킴(동적할당이기 때문에)
			if ((n->next)->data == d) {
				delnode = n->next;
				n->next = n->next->next;
				free(delnode);
				return;
			}
			//다음 노드가 지울 노드가 아니면 이동
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
	//더미 노드(Head 노드) 생성
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->data = NULL;		//더미 노드(Head 노드) 초기화
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
