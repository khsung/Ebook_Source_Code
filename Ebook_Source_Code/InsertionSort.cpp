/*
#include<stdio.h>

int main() {
	int array[5] = { 2,3,1,5,4 };
	int tempindex,temp;
	printf("���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n\n���� ����\n");
	for (int i = 1; i <sizeof(array)/sizeof(int); i++) {
		tempindex = i;
		while ((array[tempindex] < array[tempindex - 1]) && tempindex >= 1) {
			temp = array[tempindex];
			array[tempindex] = array[tempindex - 1];
			array[tempindex - 1] = temp;
			tempindex--;
		}
		for (int i = 0; i < sizeof(array) / 4; i++) {
			printf("%d   ", array[i]);
		}
		printf("\n");

	}
	printf("\n���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
}
*/