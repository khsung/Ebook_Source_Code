/*
#include<stdio.h>
#define ARRAY_SIZE 9					//�迭 ���� ����

typedef struct QUEUE {
	//[0���� 9������ �ε���][������ ����]
	int queue[10][ARRAY_SIZE];
	int front[10];
	int rear[10];
}QUEUE;

void initqueue(QUEUE* q) {				//ť �ʱ�ȭ
	for (int i = 0; i < 10; i++) {
		q->front[i] = 0;
		q->rear[i] = -1;
	}
}

//10���� ť�� ���갪�� ���� ������ �߰�
void adddata(QUEUE* q, int index, int data) {
	q->rear[index]++;
	q->queue[index][q->rear[index]] = data;
}

//���ҵ��� �ִ� �ڸ��� ã�� �Լ�
int findmaxdigit(int array[], int size) {
	int maxdigit = 0, count, temp;
	for (int i = 0; i < size; i++) {
		count = 0;
		temp = array[i];
		//�ڸ��� ��ŭ count ����
		while (temp != 0) {
			count++;
			temp /= 10;
		}
		if (maxdigit < count)
			maxdigit = count;
	}
	return maxdigit;
}

//ť���� �����͸� ���� �迭�� �й�
void distributeToOriginArray(QUEUE* q, int array[], int size) {
	//queueindex : ť ����ü�� �ε���(0~9)
	//arrayindex : ���� �迭�� �ε���
	int queueindex = 0, arrayindex = 0;
	for (int i = 0; i < 10; i++) {
		while (q->front[i] <= q->rear[i]) {
			array[arrayindex] = q->queue[i][q->front[i]];
			q->front[i]++;
			arrayindex++;
		}
	}
}

//�迭 ���
void printarray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[9] = { 541,303,9,70,5,47,11,3,155 };
	int maxdigit = findmaxdigit(array, ARRAY_SIZE);
	int currdigit = 1;
	QUEUE queue;
	initqueue(&queue);
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n��� ���� ����\n");
	for (int i = 1; i <= maxdigit; i++) {
		for (int j = 0; j < ARRAY_SIZE; j++) {
			//(array[j]/currdigit)%10 �̶� 
			//i==1�� ù ��° �ݺ����� 1���ڸ�, �� ��°�� 10���ڸ�,
			//n��° �ݺ����� 10^(n-1)�� �ڸ��� ���Ѵ�.
			adddata(&queue, (array[j] / currdigit) % 10, array[j]);
		}
		distributeToOriginArray(&queue, array, ARRAY_SIZE);
		initqueue(&queue);
		currdigit *= 10;
		printarray(array, ARRAY_SIZE);
	}
	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}
*/