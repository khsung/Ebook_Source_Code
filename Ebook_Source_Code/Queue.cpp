/*
#include <stdio.h>
#define MAX_QUEUE_SIZE 100
 
typedef struct {				//큐 구조체 선언
	int front;
	int rear;
	int queue[MAX_QUEUE_SIZE];
}QUEUE;

void init(QUEUE* q) {           //큐 초기화
	q->front = q->rear = 0;
}
int isempty(QUEUE* q) {			//큐 공백상태 체크
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}
int isfull(QUEUE* q) {          //큐 포화상태 체크
	if (q->rear == MAX_QUEUE_SIZE)
		return 1;
	else
		return 0;
}
void enqueue(QUEUE* q, int number) {    //큐 원소삽입
	if (isfull(q) == 1)
		printf("포화 큐\n");
	else {
		q->queue[q->rear] = number;
		q->rear++;
	}
}
void dequeue(QUEUE* q) {		//큐 원소제거
	if (isempty(q) == 1)
		printf("공백 큐\n");
	else {
		printf("Front 원소 제거 : %d\n",q->queue[q->front]);
		q->front++;
	}
}
void printqueue(QUEUE* q) {      //큐 출력
	if (isempty(q) == 1)
		printf("공백 큐\n");
	else {
		printf("큐 : ");
		for (int i = q->front; i < q->rear; i++) {
			printf("%d ", q->queue[i]);
		}
		printf("\n");
	}
}
int main() {
	QUEUE testqueue;			//큐 구조체 생성
	init(&testqueue);			//큐 초기화
	enqueue(&testqueue, 10);
	enqueue(&testqueue, 20);
	printqueue(&testqueue);
	dequeue(&testqueue);
	printqueue(&testqueue);
}
*/
