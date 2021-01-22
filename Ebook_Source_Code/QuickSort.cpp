/*
#include<stdio.h>
#define ARRAY_SIZE 7			//�迭 ũ�� ����

void swap(int* a, int* b) {		//�迭 ���� ��ȯ �Լ�
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//�迭 ��� �Լ�
void printarray(int array[],int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

void quicksort(int array[],int left,int right,int size) {
	if (right - left < 2) {
		return ;
	}
	else {
		int L = left, R = right, pivot = 0;
		//left�� right�� ������ ���� ������
		while (L < R) {
			//pivot���� ������ left�� ������ �̵�
			if (array[pivot] > array[L]) {
				L++;
			}
			//pivot���� ũ�� right�� ���� �̵�
			else if(array[pivot] < array[R]){
				R--;
			}
			//left�ε����� right�ε����� ���Ұ�
			//���� pivot���� ũ�� ���� �� ���� ��ȯ
			else {
				swap(&array[L], &array[R]);
				printarray(array, size);
			}
		}
		
		//pivot���� ���� ���ҵ� �� ���� �����ʿ� �ִ�
		//���ҿ� pivot�� ��ġ�� ��ȯ�ϱ� ���� ���ǹ�
		//return�� ���� ��ͷ� �ε����� �̿��Ͽ� ������ ����
		if (array[L] < array[pivot]) {
			swap(&array[L], &array[pivot]);
			printarray(array, size);
			return quicksort(array, left, L-1, size), 
				quicksort(array, L+1, right, size);
		}
		else {
			swap(&array[L-1], &array[pivot]);
			printarray(array, size);
			return quicksort(array, left, L-2, size), 
				quicksort(array, L, right, size);
		}
	}
}

int main(){
	int array[ARRAY_SIZE] = { 5,1,3,7,6,2,4 };
	int left = 1, right = ARRAY_SIZE - 1;

	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n�� ���� ����\n");
	quicksort(array, left, right, ARRAY_SIZE);
	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}

*/