/*
#include<stdio.h>

//배열의 원소 개수
#define MAX_QUEUE_SIZE 9

typedef struct QUEUE {
	//[0부터9까지의 인덱스][원소의 개수]
	int queue[10][MAX_QUEUE_SIZE];
	int front[10] = { 0 }; 
	int rear[10] = { -1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };
}QUEUE;

void initqueue(QUEUE* q) {           //큐 초기화
	for (int i = 0; i < 10; i++) {
		q->front[i] = 0;
		q->rear[i] = -1;
	}
}

void adddata(QUEUE* q, int index, int data) {
	q->rear[index]++;
	q->queue[index][q->rear[index]] = data;
}

//원소들의 최대 자리수 찾는 함수
int findmaxdigit(int array[],int size) {
	int maxdigit=0, count, temp;
	for (int i = 0; i < size; i++) {
		count = 0;
		temp = array[i];
		while (temp != 0) {
			count++;
			temp /= 10;
		}
		if (maxdigit < count)
			maxdigit = count;
	}
	return maxdigit;
}

void resortToOriginArray(QUEUE* q, int array[], int size) {
	int queueindex = 0, arrayindex = 0;
	while (queueindex < size) {
		while (q->front[arrayindex] <= q->rear[arrayindex]) {

		}
		arrayindex++;
	}
}

int main() {
	int array[9] = { 541,303,9,70,5,47,11,3,155 };
	int arraysize = sizeof(array) / sizeof(int);
	int maxdigit = findmaxdigit(array, arraysize);
	int currdigit = 1;
	QUEUE queue;
	initqueue(&queue);
	for (int i = 1; i <= maxdigit; i++) {
		for (int j = 0; j < arraysize; j++) {
			adddata(&queue, (array[j] / currdigit) % 10, array[j]);
		}
		//초기화 시키기전에 원래 배열에 분배
		currdigit *= 10;
	}

}
*/