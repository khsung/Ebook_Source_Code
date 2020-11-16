/*
#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef struct {                //스택 구조체 선언
	int stack[MAX_STACK_SIZE];
	int top;
}STACK;
void init(STACK* s) {    //스택 초기화
	s->top = -1;
}
int isempty(STACK* s) {  //스택 공백상태 체크
	if (s->top == -1)
		return 1;
	else
		return 0;
}
int isfull(STACK* s) {    //스택 포화상태 체크
	if (s->top == MAX_STACK_SIZE - 1)
		return 1;
	else
		return 0;
}
void push(STACK* s, int number) {  //스택 원소 삽입
	if (isfull(s) == 1) {
		printf("포화상태오류\n");
	}
	else {
		s->top++;
		s->stack[s->top] = number;
	}
}
void pop(STACK* s) {    //스택 원소 제거
	if (isempty(s) == 1) {
		printf("공백상태오류\n");
	}
	else {
		printf("%d\n", s->stack[s->top]);
		s->top--;
	}
}
void peek(STACK* s) {    //스택 상단 원소 출력
	if (isempty(s) == 1)
		printf("공백상태\n");
	else
	{
		printf("%d\n", s->stack[s->top]);
	}
}
void printstack(STACK* s) {   //스택 출력
	if (s->top == -1)
		printf("공백상태\n");
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

typedef struct {  //큐 구조체 선언
	int front;
	int rear;
	int queue[MAX_QUEUE_SIZE];
}QUEUE;

void init(QUEUE* q) {  //큐 초기화
	q->front = q->rear = 0;
}
int isempty(QUEUE* q) {   //큐 공백상태 체크
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}
int isfull(QUEUE* q) {  //큐 포화상태 체크
	if (q->rear == MAX_QUEUE_SIZE)
		return 1;
	else
		return 0;
}
void enqueue(QUEUE* q, int number) { //큐 원소삽입
	if (isfull(q) == 1)
		printf("포화 큐\n");
	else {
		q->queue[q->rear] = number;
		q->rear++;
	}
}
void dequeue(QUEUE* q) {  //큐 원소제거
	if (isempty(q) == 1)
		printf("공백 큐\n");
	else {
		printf("%d\n", q->queue[q->front]);
		q->front++;
	}
}
void printqueue(QUEUE* q) {  //큐 출력
	if (isempty(q) == 1)
		printf("공백 큐\n");
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
