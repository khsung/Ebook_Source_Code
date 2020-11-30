/*
#include<stdio.h>

void printarray(int array[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int temp, min, arraysize = sizeof(array)/sizeof(int);
	printf("정렬 전 배열 : ");
	printarray(array, arraysize);
	printf("정렬 과정\n");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		min = i;
		for (int j = i; j < sizeof(array) / sizeof(int); j++) {
			if (array[min] > array[j]) {    //최솟값의 인덱스 저장
				min = j;
			}
		}
		if (min != i) {            //정렬될 인덱스 값과 최솟값이
			temp = array[i];       //다를 경우에만 교환
			array[i] = array[min];
			array[min] = temp;
		}
		printarray(array, arraysize);
	}
	printf("\n정렬 후 배열 : ");
	printarray(array, arraysize);
}
*/