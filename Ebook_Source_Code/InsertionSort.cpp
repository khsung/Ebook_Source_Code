/*
#include<stdio.h>
#define ARRAY_SIZE 5						//배열 크기 선언

void printarray(int* array, int size) {     //배열 출력
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2, 3, 1, 5, 4 };
	int tempindex, temp;
	printf("정렬 전 배열 : ");
	printarray(array, ARRAY_SIZE);

	printf("\n\n삽입 정렬 과정\n");
	//정렬할 인덱스 반복, 0번째 인덱스는 정렬되어 있다고 가정
	for (int i = 1; i < ARRAY_SIZE; i++) {
		tempindex = i;
		//현재 원소가 앞의 원소보다 클 때까지 반복하여 교환 
		while (tempindex >= 1 && (array[tempindex] < array[tempindex - 1])) {
			temp = array[tempindex];
			array[tempindex] = array[tempindex - 1];
			array[tempindex - 1] = temp;
			tempindex--;
		}
		printarray(array, ARRAY_SIZE);
	}
	printf("\n정렬 후 배열 : ");
	printarray(array, ARRAY_SIZE);
}
*/
