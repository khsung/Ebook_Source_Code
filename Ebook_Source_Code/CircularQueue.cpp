/*
#include<stdio.h>
#define MAX_CQUEUE_SIZE 6  //원형 큐 최대 크기

typedef struct {    //원형 큐 구조체 선언
	int front;
	int rear;
	int CQUEUE[MAX_CQUEUE_SIZE];
}CQUEUE;

void init(CQUEUE* c) {    //원형 큐 초기화
	c->front = c->rear = 0;
}

int isempty(CQUEUE* c) {  //공백 상태 체크
	if (c->front == c->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(CQUEUE* c) {     //포화 상태 체크
	if (c->front==(c->rear+1)% MAX_CQUEUE_SIZE) {
		return 1;
	}
	else {
		return 0;
	}
}

void enqueue(CQUEUE* c,int d) {    //rear 위치에
	if (isfull(c)) {               //원소 삽입
		printf("포화 원형 큐\n");
	}
	else {
		c->rear = (c->rear + 1) % MAX_CQUEUE_SIZE;
		c->CQUEUE[c->rear] = d;
	}
}

void dequeue(CQUEUE* c) {   //front 위치 원소 제거
	if (isempty(c)) {
		printf("공백 원형 큐\n");
	}
	else {
		c->front = (c->front + 1) % MAX_CQUEUE_SIZE;
	}
}

void printCqueue(CQUEUE* c) {   //원형 큐 출력
	int curr = c->front;
	if (isempty(c)) {
		printf("공백 원형 큐\n");
	}
	else {
		printf("원형 큐 : ");
		while (curr != c->rear) {
			curr = (curr + 1) % MAX_CQUEUE_SIZE;
			printf("%d  ", c->CQUEUE[curr]);
		}
		printf("\n");
	}
}

int main() {
	CQUEUE cqueue;
	init(&cqueue);
	printCqueue(&cqueue);
	enqueue(&cqueue, 1);
	enqueue(&cqueue, 2);
	enqueue(&cqueue, 3);
	printCqueue(&cqueue);
	enqueue(&cqueue, 4);
	enqueue(&cqueue, 5);
	enqueue(&cqueue, 6);   //첫번째 인덱스를 비우기 때문에
	                       //포화 발생
	printCqueue(&cqueue);
	dequeue(&cqueue);
	dequeue(&cqueue);
	enqueue(&cqueue, 7);
	dequeue(&cqueue);
	printCqueue(&cqueue);
	dequeue(&cqueue);
	dequeue(&cqueue);
	dequeue(&cqueue);
	printCqueue(&cqueue);
}
*/
