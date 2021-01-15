/*
#include<stdio.h>
#define ARRAY_SIZE 10		//배열 크기 선언

int main() {
	int answer;
	bool check = false;		//원소가 있는지 체크하는 변수
	int array[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("기존 배열 : ");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\n찾을 원소 입력 : ");
	scanf_s("%d", &answer);

	//인덱스 0부터 차례대로 검사(선형 탐색)
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		if (array[i] == answer) {
			printf("\n%d 검색 완료, 인덱스 : %d", array[i], i);
			check = true;
		}
	}
	if (check == false) {
		printf("해당 원소 없음\n");
	}
}
*/
