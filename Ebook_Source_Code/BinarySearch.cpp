/*
#include<stdio.h>
#include<math.h>
#define ARRAY_SIZE 7				//배열 크기 선언

int main() {
	int answer;
	bool check;						//원소가 있는지 체크하는 변수
	int array[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7 };
	int left = 0;					//왼쪽 끝 인덱스
	int right = ARRAY_SIZE - 1;		//오른쪽 끝 인덱스
	int mid;						//중간 인덱스

	printf("기존 배열 : ");			//기존 배열 출력
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array[i]);
	}

	for (int i = 0; i < 2; i++) {
		check = false;
		printf("\n찾을 원소 입력 : ");
		scanf_s("%d", &answer);

		while (left <= right) {
			mid = floor((left + right) / 2);
			//중간 값이 찾을 값일 경우
			if (array[mid] == answer) {
				printf("%d 검색 완료, 인덱스 : %d", array[mid], mid);
				check = true;
				break;
			}
			//중간 값보다 찾을 값이 더 작을 경우
			else if (array[mid] > answer) {
				right = mid - 1;
			}
			//중간 값보다 찾을 값이 더 클 경우
			else {
				left = mid + 1;
			}
		}
		if (check == false) {
			printf("해당 원소 없음\n");
		}
	}
}
*/
