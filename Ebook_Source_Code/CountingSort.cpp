/*
#include<stdio.h>
#define ARRAY_SIZE 7		//배열 크기 선언
#define MAX_NUM 4			//원소 최대값 가정

//배열 출력 함수
void printarray(int array[],int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 4,1,0,4,2,1,2 };
	int index = 0;
	int countarray[MAX_NUM + 1] = { 0,0,0,0,0 };

	printf("정렬 전 배열 : ");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d  ", array[i]);
		//원소값에 해당하는 인덱스 count
		countarray[array[i]] += 1;
		array[i] = 0;            //원래 배열 0으로 초기화
	}
	printf("\n\n계수 정렬 과정\n");
	for (int i = 0; i < (MAX_NUM + 1); i++) {
		//count 배열원소가 0이 될때까지 count 배열 인덱스 숫자를 추가
		while (countarray[i] != 0) {
			array[index] = i;
			index++;
			countarray[i]--;
			printarray(array, ARRAY_SIZE);
		}
	}

	printf("\n정렬 된 배열 : ");
	printarray(array, ARRAY_SIZE);
}

*/