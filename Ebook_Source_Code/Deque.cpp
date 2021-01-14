/*
#include <stdio.h>
#define MAX_DEQUE_SIZE 4		//데크 최대 크기

typedef struct {				//데크 구조체 선언
	int front, rear;
	int deque[MAX_DEQUE_SIZE];
}DEQUE;

void init(DEQUE* d) {			//데크 초기화
	d->front = 0;
	d->rear = -1;
}

int isempty(DEQUE* d) {
	//front가 더 크면 공백 상태
	if (d->front > d->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

//Front 위치에 원소 삽입
void enqueueF(DEQUE* d, int data) {
	//Front 인덱스가 0일 때
	if (d->front == 0) {
		//Rear의 인덱스가 최대 크기일 때는 포화 상태
		if (d->rear == MAX_DEQUE_SIZE - 1) {
			printf("포화 데크\n");
		}
		else {
			d->rear += 1;
			//원소가 하나도 없었을 때
			if (d->rear==d->front) {
				d->deque[d->front] = data;
			}
			//원소가 있었을 경우 Rear방향으로 한자리씩 옮김
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

//Rear 위치에 원소 삽입
void enqueueR(DEQUE* d, int data) {
	//Rear의 인덱스가 최대 크기일 때
	if (d->rear == MAX_DEQUE_SIZE-1) {
		//Front 인덱스가 0일 때는 포화 상태
		if (d->front == 0) {
			printf("포화 데크\n");
		}
		else {
			d->front -= 1;
			//원소가 하나도 없었을 때
			if (d->rear == d->front) {
				d->deque[d->rear] = data;
			}
			//원소가 있었을 경우 Front방향으로 한자리씩 옮김
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

void dequeueF(DEQUE* d) {		//Front 위치 원소 제거
	if (isempty(d)) {
		printf("공백 데크\n");
	}
	else {
		d->front += 1;
	}
}

void dequeueR(DEQUE* d) {		//Rear 위치 원소 제거
	if (isempty(d)) {
		printf("공백 데크\n");
	}
	else {
		d->rear -= 1;
	}
}

void printdeque(DEQUE* d) {		//데크 원소 출력
	if (d->front > d->rear) {
		printf("공백 데크\n");
	}
	else {
		printf("데크 : ");
		for (int i = d->front; i <= d->rear; i++) {
			printf("%d  ", d->deque[i]);
		}
		printf("\n");
	}
}

int main() {
	DEQUE deque;				//데크 생성
	init(&deque);				//데크 초기화
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