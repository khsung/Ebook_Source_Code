/*
#include <stdio.h>
#define MAX_STACK_SIZE 100			//스택 최대 크기 선언

typedef struct {                    //스택 구조체 선언
	int stack[MAX_STACK_SIZE];		//스택 배열
	int top;						//스택 최상단 인덱스
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
		printf("포화 스택\n");
	}
	else {
		s->top++;
		s->stack[s->top] = number;
	}
}
void pop(STACK* s) {                   //스택 원소 제거
	if (isempty(s) == 1) {
		printf("공백 스택\n");
	}
	else {
		s->top--;
	}
}
void peek(STACK* s) {                //스택 상단 원소 출력
	if (isempty(s) == 1)
		printf("공백 스택\n");
	else
	{
		printf("상단 원소 : %d\n", s->stack[s->top]);
	}
}
void printstack(STACK* s) {           //스택 출력
	if (s->top == -1)
		printf("공백 스택\n");
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
