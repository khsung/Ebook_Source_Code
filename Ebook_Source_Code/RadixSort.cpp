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

//10개의 큐에 연산값에 따른 데이터 추가
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

//큐에서 데이터를 원래 배열로 분배
void distributeToOriginArray(QUEUE* q, int array[], int size) {
	//queueindex : 큐 구조체의 인덱스(0~9)
	//arrayindex : 원래 배열의 인덱스
	int queueindex = 0, arrayindex = 0;
	for (int i = 0; i < 10; i++) {
		while (q->front[i] <= q->rear[i]) {
			array[arrayindex] = q->queue[i][q->front[i]];
			q->front[i]++;
			arrayindex++;
		}
	}
}

void printarray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[9] = { 541,303,9,70,5,47,11,3,155 };
	int arraysize = sizeof(array) / sizeof(int);
	int maxdigit = findmaxdigit(array, arraysize);
	int currdigit = 1;
	QUEUE queue;
	initqueue(&queue);
	printf("정렬 전 배열 : ");
	printarray(array, arraysize);
	printf("\n정렬 과정\n");
	for (int i = 1; i <= maxdigit; i++) {
		for (int j = 0; j < arraysize; j++) {
			//(array[j]/currdigit)%10 이란 
			//i==1인 첫 번째 반복문은 1의자리, 두 번째는 10의자리,
			//n번째 반복문은 10^(n-1)의 자리를 뜻한다.
			adddata(&queue, (array[j] / currdigit) % 10, array[j]);
		}
		distributeToOriginArray(&queue, array, arraysize);
		initqueue(&queue);
		currdigit *= 10;
		printarray(array, arraysize);
	}
	printf("\n정렬 된 배열 : ");
	printarray(array, arraysize);
}
*/
