/*
#include<stdio.h>

#define ARRAY_SIZE 5



void printarray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}


void merge(int array[], int left, int mid, int right) {  //merge순서따라가면서 확인하기
	int l = left, tempindex = left, m = mid;
	int temp[ARRAY_SIZE] = { 0 };
	while (l <= mid && m+1<=right) {
		if (array[l] < array[m + 1]) {
			temp[tempindex] = array[l];
			tempindex++;
			l++;
		}
		else {
			temp[tempindex] = array[m + 1];
			tempindex++;
			m++;
		}
		for (int i = left; i <= right; i++) {
			array[i] = temp[i];
		}
		printarray(temp, ARRAY_SIZE);
	}
}

void mergesort(int array[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		mergesort(array, left, mid);
		mergesort(array, mid + 1, right);
		merge(array, left, mid, right);
	}
}
//
//void printarray(int array[],int size) {
//	for(int i = 0; i < size; i++) {
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}

int main() {
	int array[ARRAY_SIZE] = { 4,2,5,1,3 };
	printarray(array, ARRAY_SIZE);
	mergesort(array, 0, ARRAY_SIZE - 1);
	printarray(array, ARRAY_SIZE);
}
*/