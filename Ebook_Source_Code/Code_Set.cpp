/*
#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef struct {                //���� ����ü ����
	int stack[MAX_STACK_SIZE];
	int top;
}STACK;
void init(STACK* s) {    //���� �ʱ�ȭ
	s->top = -1;
}
int isempty(STACK* s) {  //���� ������� üũ
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int isfull(STACK* s) {    //���� ��ȭ���� üũ
	if (s->top == MAX_STACK_SIZE - 1)
		return 1;
	else
		return 0;
}
void push(STACK* s, int number) {  //���� ���� ����
	if (isfull(s) == 1) {
		printf("��ȭ���¿���\n");
	}
	else {
		s->top++;
		s->stack[s->top] = number;
	}
}
void pop(STACK* s) {    //���� ���� ����
	if (isempty(s) == 1) {
		printf("������¿���\n");
	}
	else {
		printf("%d\n", s->stack[s->top]);
		s->top--;
	}
}
void peek(STACK* s) {    //���� ��� ���� ���
	if (isempty(s) == 1)
		printf("�������\n");
	else
	{
		printf("%d\n", s->stack[s->top]);
	}
}
void printstack(STACK* s) {   //���� ���
	if (s->top == -1)
		printf("�������\n");
	else {
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
	printstack(&teststack);
	pop(&teststack);
	peek(&teststack);
}
*/









/*
#include <stdio.h>
#define MAX_QUEUE_SIZE 100

typedef struct {  //ť ����ü ����
	int front;
	int rear;
	int queue[MAX_QUEUE_SIZE];
}QUEUE;

void init(QUEUE* q) {  //ť �ʱ�ȭ
	q->front = q->rear = 0;
}
int isempty(QUEUE* q) {   //ť ������� üũ
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}
int isfull(QUEUE* q) {  //ť ��ȭ���� üũ
	if (q->rear == MAX_QUEUE_SIZE)
		return 1;
	else
		return 0;
}
void enqueue(QUEUE* q, int number) { //ť ���һ���
	if (isfull(q) == 1)
		printf("��ȭ ť\n");
	else {
		q->queue[q->rear] = number;
		q->rear++;
	}
}
void dequeue(QUEUE* q) {  //ť ��������
	if (isempty(q) == 1)
		printf("���� ť\n");
	else {
		printf("%d\n", q->queue[q->front]);
		q->front++;
	}
}
void printqueue(QUEUE* q) {  //ť ���
	if (isempty(q) == 1)
		printf("���� ť\n");
	else {
		for (int i = q->front; i < q->rear; i++) {
			printf("%d ", q->queue[i]);
		}
		printf("\n");
	}
}
int main() {
	QUEUE testqueue;
	init(&testqueue);
	enqueue(&testqueue, 10);
	enqueue(&testqueue, 20);
	printqueue(&testqueue);
	dequeue(&testqueue);
}
*/
