/*
#include<stdio.h>

void printarray(int* array, int size) {     //배열 출력
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[5] = { 2,3,1,5,4 };
	int tempindex,temp,arraysize = sizeof(array)/sizeof(int);
	printf("정렬 전 배열 : ");
	printarray(array, arraysize);
	printf("\n\n정렬 과정\n");
	for (int i = 1; i <sizeof(array)/sizeof(int); i++) {
		tempindex = i;
		while (tempindex >= 1 && (array[tempindex] < array[tempindex - 1])) {
			temp = array[tempindex];
			array[tempindex] = array[tempindex - 1];
			array[tempindex - 1] = temp;
			tempindex--;
		}
		printarray(array, arraysize);

	}
	printf("\n정렬 후 배열 : ");
	printarray(array, arraysize);
}

*/