/*
#include<stdio.h>
#define MAX_TABLE_SIZE 5

int hashfunction(int k) {
	return k % MAX_TABLE_SIZE;
}

int main() {
	int keyarray[6] = { 7,10,12,6,11,4 };
	//-1은 데이터가 없다고 가정
	//char형일 경우 null로 초기화
	int tablearray[MAX_TABLE_SIZE] = { -1,-1,-1 ,-1 ,-1 };
	int tempindex,start,check;
	int num;
	printf("해시 테이블 : ");
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n");
	for (int i = 0; i < (int)(sizeof(keyarray) / sizeof(int)); i++) {
		//원소 찾았는지 확인하는 변수
		check = 0;
		//해시 테이블 인덱스 저장하는 변수
		tempindex = hashfunction(keyarray[i]);
		//해시 테이블이 비어있을 때 바로 원소 넣음
		if (tablearray[tempindex] == -1) {
			tablearray[tempindex] = keyarray[i];
		}
		//해시 테이블에 원소가 이미 존재할 때 차례로 다음 인덱스 확인
		//빈 공간이 나올 때 까지 검색, 원형 큐와 같은 원리
		else {
			start = tempindex;
			tempindex = (tempindex + 1) % ((int)(sizeof(tablearray) / sizeof(int)));
			while (tempindex != start) {
				if (tablearray[tempindex] == -1) {
					tablearray[tempindex] = keyarray[i];
					check = 1;
					break;
				}
				else {
					tempindex = (tempindex + 1) % ((int)(sizeof(tablearray) / sizeof(int)));
				}
			}
			if (check == 0) {
				printf("포화 해시 테이블\n");
			}
		}
	}
	printf("해시 테이블 : ");
	//해시테이블 출력
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n찾을 원소 : ");
	scanf_s("%d", &num);
	tempindex = hashfunction(num);
	check = 0;
	do {
		if (num == tablearray[tempindex]) {
			printf("%d는 %d 인덱스에 있음\n", num, tempindex);
			check = 1;
			break;
		}
		tempindex = (tempindex + 1) % ((int)(sizeof(tablearray) / sizeof(int)));
	} while (tempindex!= hashfunction(num));
	if (check == 0) {
		printf("%d은 없는 원소\n", num);
	}
}
*/
