/*
#include<stdio.h>
#define ARRAY_SIZE 5

//�迭 ��� �Լ�
void printarray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2,3,1,5,4 };
	int temp;
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);

	printf("\n���� ����\n");
	for (int i = ARRAY_SIZE - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			//���� ���� ������ ������ ũ�� ��ȯ
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			printarray(array, ARRAY_SIZE);
		}
	}
	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n");
}
*/


