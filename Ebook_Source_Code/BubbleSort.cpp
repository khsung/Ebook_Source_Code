/*
#include<stdio.h>

void main() {
	int array[5] = { 2,3,1,5,4 };
	int temp;
	printf("정렬 전 배열 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
	for (int i = sizeof(array) / 4 - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {  //왼쪽 값이 오른쪽
				temp = array[j];            //값보다 크면 교환
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printf("\n정렬 후 배열 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
}
*/
