/*
#include<stdio.h>

void main() {
	int array[5] = { 2,3,1,5,4 };
	int temp;
	printf("���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
	for (int i = sizeof(array) / 4 - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {  //���� ���� ������
				temp = array[j];            //������ ũ�� ��ȯ
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printf("\n���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
}
*/
