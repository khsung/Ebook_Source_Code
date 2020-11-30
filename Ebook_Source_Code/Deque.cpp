
#include <stdio.h>
#include <malloc.h>

typedef struct {              //노드 구조체 선언
	int data;
	struct NODE* prev;
	struct NODE* next;
}NODE;

typedef struct {              //데크 구조체 선언
	NODE* front;
	NODE* rear;
}DEQUE;

void init(DEQUE* d) {           //큐 초기화
	d->front = d->rear = NULL;
}

int isempty(DEQUE* d) {       //큐 공백상태 체크
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
