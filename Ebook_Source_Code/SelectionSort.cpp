/*
#include<stdio.h>

void printarray(int array[]) {
	printf("%d", sizeof(array));
	for (int i = 0; i <= sizeof(array); i++) {
		//printf("%d  ", array[i]);
	}
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int temp,min;
	printf("���� �� �迭 : ");
	printarray(array);
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
	}
	printf("\n���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
}
*/
