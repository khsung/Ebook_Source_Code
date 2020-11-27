/*
#include <stdio.h>
 
#define MAX_STACK_SIZE 100

typedef struct {                      //스택 구조체 선언
	int stack[MAX_STACK_SIZE];
	int top;
}STACK;

void init(STACK* s) {                //스택 초기화
	s->top = -1;
}
int isempty(STACK* s) {              //스택 공백상태 체크
	if (s->top == -1)
		return 1;
	else
		return 0;
} 
int isfull(STACK* s) {                //스택 포화상태 체크
	if (s->top == MAX_STACK_SIZE-1)
		return 1;
	else
		return 0;
}
void push(STACK* s, int number) {      //스택 원소 삽입
	if (isfull(s) == 1) {
		printf("포화상태오류\n");
	}
	else {
		s->top++;
		s->stack[s->top] = number;
	}
}
void pop(STACK* s) {                   //스택 원소 제거
	if (isempty(s) == 1) {
		printf("공백상태오류\n");
	}
	else {
		s->top--;
	}
}
void peek(STACK* s) {                //스택 상단 원소 출력
	if (isempty(s) == 1)
		printf("공백상태\n");
	else
	{
		printf("상단원소 : %d\n", s->stack[s->top]);
	}
}
void printstack(STACK* s) {           //스택 출력
	if (s->top == -1)
		printf("공백상태\n");
	else {
		printf("스택 : ");
		for (int i = 0; i <= s->top; i++) {
			printf("%d ", s->stack[i]);
		}
		printf("\n");
	}
}
int main() {
	STACK teststack;
	init(&teststack);
	push(&teststack, 10);
	peek(&teststack);
	push(&teststack, 20);
	push(&teststack, 30);
	printstack(&teststack);
	peek(&teststack);
	pop(&teststack);
	printstack(&teststack);
}

*/







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