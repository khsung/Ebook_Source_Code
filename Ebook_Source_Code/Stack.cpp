/*
#include <stdio.h>
#define MAX_STACK_SIZE 100			//���� �ִ� ũ�� ����

typedef struct {                    //���� ����ü ����
	int stack[MAX_STACK_SIZE];		//���� �迭
	int top;						//���� �ֻ�� �ε���
}STACK;

void init(STACK* s) {                //���� �ʱ�ȭ
	s->top = -1;
}
int isempty(STACK* s) {              //���� ������� üũ
	if (s->top == -1)
		return 1;
	else
		return 0;
} 
int isfull(STACK* s) {                //���� ��ȭ���� üũ
	if (s->top == MAX_STACK_SIZE-1)
		return 1;
	else
		return 0;
}
void push(STACK* s, int number) {      //���� ���� ����
	if (isfull(s) == 1) {
		printf("��ȭ ����\n");
	}
	else {
		s->top++;
		s->stack[s->top] = number;
	}
}
void pop(STACK* s) {                   //���� ���� ����
	if (isempty(s) == 1) {
		printf("���� ����\n");
	}
	else {
		s->top--;
	}
}
void peek(STACK* s) {                //���� ��� ���� ���
	if (isempty(s) == 1)
		printf("���� ����\n");
	else
	{
		printf("��� ���� : %d\n", s->stack[s->top]);
	}
}
void printstack(STACK* s) {           //���� ���
	if (s->top == -1)
		printf("���� ����\n");
	else {
		printf("���� : ");
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
