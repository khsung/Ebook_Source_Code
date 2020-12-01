/*
#include<stdio.h>
#define MAX_CQUEUE_SIZE 6  //���� ť �ִ� ũ��

typedef struct {    //���� ť ����ü ����
	int front;
	int rear;
	int CQUEUE[MAX_CQUEUE_SIZE];
}CQUEUE;

void init(CQUEUE* c) {    //���� ť �ʱ�ȭ
	c->front = c->rear = 0;
}

int isempty(CQUEUE* c) {  //���� ���� üũ
	if (c->front == c->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(CQUEUE* c) {     //��ȭ ���� üũ
	if (c->front==(c->rear+1)% MAX_CQUEUE_SIZE) {
		return 1;
	}
	else {
		return 0;
	}
}

void enqueue(CQUEUE* c,int d) {    //rear ��ġ��
	if (isfull(c)) {               //���� ����
		printf("��ȭ ���� ť\n");
	}
	else {
		c->rear = (c->rear + 1) % MAX_CQUEUE_SIZE;
		c->CQUEUE[c->rear] = d;
	}
}

void dequeue(CQUEUE* c) {   //front ��ġ ���� ����
	if (isempty(c)) {
		printf("���� ���� ť\n");
	}
	else {
		c->front = (c->front + 1) % MAX_CQUEUE_SIZE;
	}
}

void printCqueue(CQUEUE* c) {   //���� ť ���
	int curr = c->front;
	if (isempty(c)) {
		printf("���� ���� ť\n");
	}
	else {
		printf("���� ť : ");
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
	enqueue(&cqueue, 6);   //ù��° �ε����� ���� ������
	                       //��ȭ �߻�
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
