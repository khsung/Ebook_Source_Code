/*
#include<stdio.h>
#define ARRAY_SIZE 5

//�迭 ��� �Լ�
void printarray(int array[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2,3,1,5,4 };
	int temp, min;
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);

	printf("���� ����\n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		min = i;
		for (int j = i; j < ARRAY_SIZE; j++){
			//�ּڰ��� �ε��� ����
			if (array[min] > array[j]) {
				min = j;
			}
		}
		//���ĵ� �ε��� ���� �ּڰ��� �ٸ� ��쿡�� ��ȯ
		if (min != i) {
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
		printarray(array, ARRAY_SIZE);
	}
	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}

*/