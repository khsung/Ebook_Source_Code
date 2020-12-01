/*
#include <stdio.h>

#define MAX_DEQUE_SIZE 4    //单农 弥措 农扁

typedef struct {              //单农 备炼眉 急攫
	int front, rear;
	int deque[MAX_DEQUE_SIZE];
}DEQUE;

void init(DEQUE* d) {
	d->front = 0;
	d->rear = -1;
}

int isempty(DEQUE* d) {
	if (d->front > d->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

void enqueueF(DEQUE* d, int data) {
	if (d->front == 0) {
		if (d->rear == MAX_DEQUE_SIZE - 1) {
			printf("器拳 单农\n");
		}
		else {
			d->rear += 1;
			if (d->rear==d->front) {
				d->deque[d->front] = data;
			}
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

void enqueueR(DEQUE* d, int data) {
	if (d->rear == MAX_DEQUE_SIZE-1) {
		if (d->front == 0) {
			printf("器拳 单农\n");
		}
		else {
			d->front -= 1;
			if (d->rear == d->front) {
				d->deque[d->rear] = data;
			}
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

void dequeueF(DEQUE* d) {
	if (isempty(d)) {
		printf("傍归 单农\n");
	}
	else {
		d->front += 1;
	}
}

void dequeueR(DEQUE* d) {
	if (isempty(d)) {
		printf("傍归 单农\n");
	}
	else {
		d->rear -= 1;
	}
}

void printdeque(DEQUE* d) {
	if (d->front > d->rear) {
		printf("傍归 单农\n");
	}
	else {
		printf("单农 : ");
		for (int i = d->front; i <= d->rear; i++) {
			printf("%d  ", d->deque[i]);
		}
		printf("\n");
	}
}

int main() {
	DEQUE deque;
	init(&deque);
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