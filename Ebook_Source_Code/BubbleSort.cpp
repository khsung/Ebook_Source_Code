/*
#include<stdio.h>

void printarray(int *array) {     //�迭 ���
	for (int i = 0; i <= sizeof(array); i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int temp;
	printf("���� �� �迭 : ");
	printarray(array);
	printf("\n���� ����\n");
	for (int i = sizeof(array) / sizeof(int) - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {  //���� ���� ������
				temp = array[j];            //������ ũ�� ��ȯ
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			printarray(array);
		}
	}
	printf("\n���� �� �迭 : ");
	printarray(array);
	printf("\n");
}

*/

