/*
#include<stdio.h>

void printarray(int array[],int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[7] = { 4,1,0,4,2,1,2 };
	int index = 0, arraysize = 7;
	int countarray[5] = { 0,0,0,0,0 };
	printf("정렬 전 배열 : ");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d  ", array[i]);
		countarray[array[i]] += 1;//원소값에 해당하는 인덱스 count
		array[i] = 0;            //원래 배열 0으로 초기화
	}
	printf("\n\n정렬 과정\n");
	for (int i = 0; i < sizeof(countarray) / sizeof(int); i++) {
		while (countarray[i] != 0) { //count 배열원소가 0이 될때까지
			array[index] = i;        //count 배열 인덱스 숫자를 추가
			index++;
			countarray[i]--;
			printarray(array, arraysize);
		}
	}

	printf("\n정렬 된 배열 : ");
	printarray(array, arraysize);
}

*/

