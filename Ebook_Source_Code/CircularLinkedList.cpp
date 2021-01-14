/*
#include <stdio.h>
#include <malloc.h>

typedef struct NODE {		//노드 구조체 선언
	int data;				//노드의 키 값
	struct NODE* next;		//다음 노드
}NODE;

void addnode(NODE* n, int d) {     //끝에 노드 추가
	//추가할 노드 초기화
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* curr = n;
	temp->data = d;
	temp->next = NULL;
	//공백 노드일 때 노드를 추가하고 자기 자신을 가리킴
	if (n->next == NULL) {
		n->next = temp;
		temp->next = n->next;
	}
	else {
		//원형이기 때문에 먼저 다음 노드로 이동하고
		//헤드 노드의 다음 노드를 가리키기 전까지 반복
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
				//노드가 자기 자신을 가리킬 때
				//즉 헤드 노드를 제외한 노드가 한개일 때
				if (delnode->next == delnode) {
					n->next = NULL;
					free(delnode);
					return;
				}
				else {
					//지울 노드가 헤드 노드 다음 노드일 때
					if (delnode == n->next) {
						temp = n;
						//끝 노드의 다음 노드를
						//지울 노드의 다음 노드로 연결
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
	//헤드 노드 초기화
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
