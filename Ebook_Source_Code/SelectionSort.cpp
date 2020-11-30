
#include<stdio.h>

void main() {
	int array[5] = { 2,3,1,5,4 };
	int temp,min;
	printf("정렬 전 배열 : ");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d   ", array[i]);
	}
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		min = i;
		for (int j = i; j < sizeof(array) / sizeof(int); j++) {
			if (array[min] > array[j]) {    //최솟값의 인덱스 저장
				min = j;
			}
		}
		if (min != i) {            //정렬된 인덱스 값과 최솟값이
			temp = array[i];       //다를 경우에만 교환
			array[i] = array[min];
			array[min] = temp;
		}
	}
	printf("\n정렬 후 배열 : ");
	for (int i = 0; i < sizeof(array) / 4; i++) {
		printf("%d   ", array[i]);
	}
}

