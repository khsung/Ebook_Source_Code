/*
#include<stdio.h>

void printarray(int array[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int temp, min, arraysize = sizeof(array)/sizeof(int);
	printf("���� �� �迭 : ");
	printarray(array, arraysize);
	printf("���� ����\n");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		min = i;
		for (int j = i; j < sizeof(array) / sizeof(int); j++) {
			if (array[min] > array[j]) {    //�ּڰ��� �ε��� ����
				min = j;
			}
		}
		if (min != i) {            //���ĵ� �ε��� ���� �ּڰ���
			temp = array[i];       //�ٸ� ��쿡�� ��ȯ
			array[i] = array[min];
			array[min] = temp;
		}
		printarray(array, arraysize);
	}
	printf("\n���� �� �迭 : ");
	printarray(array, arraysize);
}
*/