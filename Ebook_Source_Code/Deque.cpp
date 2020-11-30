
#include <stdio.h>
#include <malloc.h>

typedef struct {              //��� ����ü ����
	int data;
	struct NODE* prev;
	struct NODE* next;
}NODE;

typedef struct {              //��ũ ����ü ����
	NODE* front;
	NODE* rear;
}DEQUE;

void init(DEQUE* d) {           //ť �ʱ�ȭ
	d->front = d->rear = NULL;
}

int isempty(DEQUE* d) {       //ť ������� üũ
	if (d->front == NULL)
		return 1;
	else
		return 0;
}

void enqueuef(DEQUE* d, int data) {
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;
	if (d->front == NULL) {
		d->front = temp;
		d->rear = temp;
		temp->next = temp->prev = NULL;
	}
	else {
		temp->next = d->front->next;
		d->front= temp;
		printf("%d", d->front->next->data);
	}
}

int main() {
	DEQUE* deque = (DEQUE*)malloc(sizeof(DEQUE));
	init(deque);
	enqueuef(deque, 1);
}
