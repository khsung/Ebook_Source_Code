/*
#include<stdio.h>
#define ARRAY_SIZE 5		//�迭 ũ�� ����

//�迭 ��� �Լ�
void printarray(int array[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2,3,1,5,4 };
	int temp, minindex;
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);

	printf("\n���� ���� ����\n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		minindex = i;
		for (int j = i; j < ARRAY_SIZE; j++){
			//�ּڰ��� �ε��� ����
			if (array[minindex] > array[j]) {
				minindex = j;
			}
		}
		//���ĵ� �ε��� ���� �ּڰ��� �ٸ� ��쿡�� ��ȯ
		if (minindex != i) {
			temp = array[i];
			array[i] = array[minindex];
			array[minindex] = temp;
		}
		printarray(array, ARRAY_SIZE);
	}
	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}

*/