
#include<stdio.h>

void main() {
	int array[5] = { 2,3,1,5,4 };
	int temp,min;
	printf("���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d   ", array[i]);
	}
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

