/*
#include<stdio.h>

//�迭�� ���� ����
#define MAX_QUEUE_SIZE 9

typedef struct QUEUE {
	//[0����9������ �ε���][������ ����]
	int queue[10][MAX_QUEUE_SIZE];
	int front[10] = { 0 }; 
	int rear[10] = { -1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };
}QUEUE;

void initqueue(QUEUE* q) {           //ť �ʱ�ȭ
	for (int i = 0; i < 10; i++) {
		q->front[i] = 0;
		q->rear[i] = -1;
	}
}

void adddata(QUEUE* q, int index, int data) {
	q->rear[index]++;
	q->queue[index][q->rear[index]] = data;
}

//���ҵ��� �ִ� �ڸ��� ã�� �Լ�
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
		//�ʱ�ȭ ��Ű������ ���� �迭�� �й�
		currdigit *= 10;
	}

}
*/