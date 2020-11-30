/*
#include<stdio.h>

void printarray(int *array, int size) {     //배열 출력
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int temp,arraysize=5;
	printf("정렬 전 배열 : ");
	printarray(array, arraysize);
	printf("\n정렬 과정\n");
	for (int i = sizeof(array) / sizeof(int) - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {  //왼쪽 값이 오른쪽
				temp = array[j];            //값보다 크면 교환
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			printarray(array, arraysize);
		}
	}
	printf("\n정렬 후 배열 : ");
	printarray(array, arraysize);
	printf("\n");
}
*/


