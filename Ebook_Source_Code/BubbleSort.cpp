/*
#include<stdio.h>

void printarray(int *array, int size) {     //�迭 ���
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int temp,arraysize=5;
	printf("���� �� �迭 : ");
	printarray(array, arraysize);
	printf("\n���� ����\n");
	for (int i = sizeof(array) / sizeof(int) - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {  //���� ���� ������
				temp = array[j];            //������ ũ�� ��ȯ
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			printarray(array, arraysize);
		}
	}
	printf("\n���� �� �迭 : ");
	printarray(array, arraysize);
	printf("\n");
}
*/


