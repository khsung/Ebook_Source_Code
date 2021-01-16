/*
#include<stdio.h>
#define MAX_TABLE_SIZE 5
#define DATA_SIZE 6

int hashfunction(int k) {		//해시 함수
	return k % MAX_TABLE_SIZE;
}

int main() {
	//해시 테이블에 추가할 데이터
	int dataarray[DATA_SIZE] = { 7,10,12,6,11,4 };
	//-1은 데이터가 없다고 가정, char형일 경우 null로 초기화
	int tablearray[MAX_TABLE_SIZE] = { -1, -1, -1, -1, -1 };
	int tempindex, start, check;
	int num;		//입력 받을 숫자 변수

	printf("해시 테이블 : ");
	//해시 테이블 출력
	for (int i = 0; i < MAX_TABLE_SIZE; i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n");

	for (int i = 0; i < DATA_SIZE; i++) {
		//원소를 넣었는지 확인하는 변수
		check = 0;
		//해시 테이블 인덱스 저장하는 변수
		tempindex = hashfunction(dataarray[i]);
		//해시 테이블이 비어있을 때 바로 원소 넣음
		if (tablearray[tempindex] == -1) {
			tablearray[tempindex] = dataarray[i];
		}
		//해시 테이블에 원소가 이미 존재할 때 차례로 다음 인덱스 확인
		//빈 공간이 나올 때 까지 검색
		else {
			start = tempindex;
			tempindex = (tempindex + 1) % MAX_TABLE_SIZE;
			//반복을 통해 비어있는 인덱스 탐색
			while (tempindex != start) {
				if (tablearray[tempindex] == -1) {
					tablearray[tempindex] = dataarray[i];
					check = 1;
					break;
				}
				else {
					tempindex = (tempindex + 1) % MAX_TABLE_SIZE;
				}
			}
			if (check == 0) {
				printf("포화 해시 테이블\n");
			}
		}
	}
	printf("해시 테이블 : ");
	//해시테이블 출력
	for (int i = 0; i < MAX_TABLE_SIZE; i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n찾을 원소 : ");
	scanf_s("%d", &num);
	tempindex = hashfunction(num);
	check = 0;			//원소를 찾았는지 확인하는 변수
	do {
		if (num == tablearray[tempindex]) {
			printf("%d는 %d 인덱스에 있음\n", num, tempindex);
			check = 1;
			break;
		}
		tempindex = (tempindex + 1) % MAX_TABLE_SIZE;
	} while (tempindex!= hashfunction(num));
	if (check == 0) {
		printf("%d은 없는 원소\n", num);
	}
}
*/
