/*
#include<stdio.h>
#define ARRAY_SIZE 5		//배열 크기 선언

//배열 출력 함수
void printarray(int array[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2,3,1,5,4 };
	int temp, minindex;
	printf("정렬 전 배열 : ");
	printarray(array, ARRAY_SIZE);

	printf("\n선택 정렬 과정\n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		minindex = i;
		for (int j = i; j < ARRAY_SIZE; j++){
			//최솟값의 인덱스 저장
			if (array[minindex] > array[j]) {
				minindex = j;
			}
		}
		//정렬될 인덱스 값과 최솟값이 다를 경우에만 교환
		if (minindex != i) {
			temp = array[i];
			array[i] = array[minindex];
			array[minindex] = temp;
		}
		printarray(array, ARRAY_SIZE);
	}
	printf("\n정렬 후 배열 : ");
	printarray(array, ARRAY_SIZE);
}

*/