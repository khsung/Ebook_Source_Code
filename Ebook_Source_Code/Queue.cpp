/*
#include <stdio.h>
#define MAX_QUEUE_SIZE 100
 
typedef struct {				//ť ����ü ����
	int front;
	int rear;
	int queue[MAX_QUEUE_SIZE];
}QUEUE;

void init(QUEUE* q) {           //ť �ʱ�ȭ
	q->front = q->rear = 0;
}
int isempty(QUEUE* q) {			//ť ������� üũ
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}
int isfull(QUEUE* q) {          //ť ��ȭ���� üũ
	if (q->rear == MAX_QUEUE_SIZE)
		return 1;
	else
		return 0;
}
void enqueue(QUEUE* q, int number) {    //ť ���һ���
	if (isfull(q) == 1)
		printf("��ȭ ť\n");
	else {
		q->queue[q->rear] = number;
		q->rear++;
	}
}
void dequeue(QUEUE* q) {		//ť ��������
	if (isempty(q) == 1)
		printf("���� ť\n");
	else {
		printf("Front ���� ���� : %d\n",q->queue[q->front]);
		q->front++;
	}
}
void printqueue(QUEUE* q) {      //ť ���
	if (isempty(q) == 1)
		printf("���� ť\n");
	else {
		printf("ť : ");
		for (int i = q->front; i < q->rear; i++) {
			printf("%d ", q->queue[i]);
		}
		printf("\n");
	}
}
int main() {
	QUEUE testqueue;			//ť ����ü ����
	init(&testqueue);			//ť �ʱ�ȭ
	enqueue(&testqueue, 10);
	enqueue(&testqueue, 20);
	printqueue(&testqueue);
	dequeue(&testqueue);
	printqueue(&testqueue);
}
*/
