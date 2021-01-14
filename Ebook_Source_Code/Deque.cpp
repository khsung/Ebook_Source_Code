/*
#include <stdio.h>
#define MAX_DEQUE_SIZE 4		//��ũ �ִ� ũ��

typedef struct {				//��ũ ����ü ����
	int front, rear;
	int deque[MAX_DEQUE_SIZE];
}DEQUE;

void init(DEQUE* d) {			//��ũ �ʱ�ȭ
	d->front = 0;
	d->rear = -1;
}

int isempty(DEQUE* d) {
	//front�� �� ũ�� ���� ����
	if (d->front > d->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

//Front ��ġ�� ���� ����
void enqueueF(DEQUE* d, int data) {
	//Front �ε����� 0�� ��
	if (d->front == 0) {
		//Rear�� �ε����� �ִ� ũ���� ���� ��ȭ ����
		if (d->rear == MAX_DEQUE_SIZE - 1) {
			printf("��ȭ ��ũ\n");
		}
		else {
			d->rear += 1;
			//���Ұ� �ϳ��� ������ ��
			if (d->rear==d->front) {
				d->deque[d->front] = data;
			}
			//���Ұ� �־��� ��� Rear�������� ���ڸ��� �ű�
			else {
				for (int i = d->rear; i > d->front; i--) {
					d->deque[i] = d->deque[i-1];
				}
				d->deque[d->front] = data;
			}
		}
	}
	else {
		d->front -= 1;
		d->deque[d->front] = data;
	}
}

//Rear ��ġ�� ���� ����
void enqueueR(DEQUE* d, int data) {
	//Rear�� �ε����� �ִ� ũ���� ��
	if (d->rear == MAX_DEQUE_SIZE-1) {
		//Front �ε����� 0�� ���� ��ȭ ����
		if (d->front == 0) {
			printf("��ȭ ��ũ\n");
		}
		else {
			d->front -= 1;
			//���Ұ� �ϳ��� ������ ��
			if (d->rear == d->front) {
				d->deque[d->rear] = data;
			}
			//���Ұ� �־��� ��� Front�������� ���ڸ��� �ű�
			else {
				for (int i = d->front; i < d->rear; i++) {
					d->deque[i] = d->deque[i + 1];
				}
				d->deque[d->rear] = data;
			}
		}
	}
	else {
		d->rear += 1;
		d->deque[d->rear] = data;
	}
}

void dequeueF(DEQUE* d) {		//Front ��ġ ���� ����
	if (isempty(d)) {
		printf("���� ��ũ\n");
	}
	else {
		d->front += 1;
	}
}

void dequeueR(DEQUE* d) {		//Rear ��ġ ���� ����
	if (isempty(d)) {
		printf("���� ��ũ\n");
	}
	else {
		d->rear -= 1;
	}
}

void printdeque(DEQUE* d) {		//��ũ ���� ���
	if (d->front > d->rear) {
		printf("���� ��ũ\n");
	}
	else {
		printf("��ũ : ");
		for (int i = d->front; i <= d->rear; i++) {
			printf("%d  ", d->deque[i]);
		}
		printf("\n");
	}
}

int main() {
	DEQUE deque;				//��ũ ����
	init(&deque);				//��ũ �ʱ�ȭ
	printdeque(&deque);
	enqueueF(&deque, 1);
	enqueueF(&deque, 2);
	enqueueR(&deque, 3);
	enqueueR(&deque, 4);
	enqueueR(&deque, 5);
	printdeque(&deque);
	dequeueF(&deque);
	dequeueR(&deque);
	printdeque(&deque);
	enqueueR(&deque, 6);
	printdeque(&deque);
	dequeueF(&deque);
	dequeueF(&deque);
	dequeueR(&deque);
	dequeueF(&deque);
}
*/