
#include<stdio.h>

int main() {
	int array[7] = { 4,1,0,4,2,1,2 };
	int index = 0;
	int countarray[5] = { 0,0,0,0,0 };
	printf("정렬 전 배열 : ");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d  ", array[i]);
		countarray[array[i]] += 1;
	}

	for (int i = 0; i < sizeof(countarray) / sizeof(int); i++) {
		while (countarray[i] != 0) {
			array[index] = i;
			index++;
			countarray[i]--;
		}
	}

	printf("\n정렬 된 배열 : ");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d  ", array[i]);
	}
}

