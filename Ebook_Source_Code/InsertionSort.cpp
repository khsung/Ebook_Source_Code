/*
#include<stdio.h>

int main() {
	int array[5] = { 2,3,1,5,4 };
	int tempindex,temp;
	printf("정렬 전 배열 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n\n정렬 과정\n");
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
	printf("\n정렬 후 배열 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
}
*/