/*
#include<stdio.h>
#define ARRAY_SIZE 7			//배열 크기 선언

void swap(int* a, int* b) {		//배열 원소 교환 함수
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//배열 출력 함수
void printarray(int array[],int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

void quicksort(int array[],int left,int right,int size) {
	if (right - left < 2) {
		return ;
	}
	else {
		int L = left, R = right, pivot = 0;
		//left와 right가 만나지 않을 때까지
		while (L < R) {
			//pivot보다 작으면 left를 오른쪽 이동
			if (array[pivot] > array[L]) {
				L++;
			}
			//pivot보다 크면 right를 왼쪽 이동
			else if(array[pivot] < array[R]){
				R--;
			}
			//left인덱스와 right인덱스의 원소가
			//각각 pivot보다 크고 작을 때 서로 교환
			else {
				swap(&array[L], &array[R]);
				printarray(array, size);
			}
		}
		
		//pivot보다 작은 원소들 중 가장 오른쪽에 있는
		//원소와 pivot의 위치를 교환하기 위한 조건문
		//return을 통한 재귀로 인덱스를 이용하여 나눠서 정렬
		if (array[L] < array[pivot]) {
			swap(&array[L], &array[pivot]);
			printarray(array, size);
			return quicksort(array, left, L-1, size), 
				quicksort(array, L+1, right, size);
		}
		else {
			swap(&array[L-1], &array[pivot]);
			printarray(array, size);
			return quicksort(array, left, L-2, size), 
				quicksort(array, L, right, size);
		}
	}
}

int main(){
	int array[ARRAY_SIZE] = { 5,1,3,7,6,2,4 };
	int left = 1, right = ARRAY_SIZE - 1;

	printf("정렬 전 배열 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n퀵 정렬 과정\n");
	quicksort(array, left, right, ARRAY_SIZE);
	printf("\n정렬 된 배열 : ");
	printarray(array, ARRAY_SIZE);
}

*/