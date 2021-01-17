/*
#include<stdio.h>
#define ARRAY_SIZE 5

//배열 출력 함수
void printarray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2,3,1,5,4 };
	int temp;
	printf("정렬 전 배열 : ");
	printarray(array, ARRAY_SIZE);

	printf("\n정렬 과정\n");
	for (int i = ARRAY_SIZE - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			//왼쪽 값이 오른쪽 값보다 크면 교환
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			printarray(array, ARRAY_SIZE);
		}
	}
	printf("\n정렬 후 배열 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n");
}
*/


