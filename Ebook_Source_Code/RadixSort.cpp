/*
#include<stdio.h>

//배열의 원소 개수
#define MAX_QUEUE_SIZE 9

typedef struct QUEUE {
	//[0부터9까지의 인덱스][원소의 개수]
	int queue[10][MAX_QUEUE_SIZE];
	int front[10] = { 0 }; 
	int rear[10] = { -1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };
}QUEUE;

//원소들의 최대 자리수 찾는 함수
int findmaxdigit(int array[],int size) {
	int maxdigit=0, count, temp;
	for (int i = 0; i < size; i++) {
		count = 0;
		temp = array[i];
		while (temp != 0) {
			count++;
			temp /= 10;
		}
		if (maxdigit < count)
			maxdigit = count;
	}
	return maxdigit;
}

int main() {
	int array[9] = { 541,303,9,70,5,47,11,3,155 };
	int arraysize = sizeof(array) / sizeof(int);
	int maxdigit = findmaxdigit(array, arraysize);
	int currdigit = 1;

	for (int i = 1; i <= maxdigit; i++) {
		for (int j = 0; j < arraysize; j++) {

		}
		currdigit *= 10;
	}

}
*/