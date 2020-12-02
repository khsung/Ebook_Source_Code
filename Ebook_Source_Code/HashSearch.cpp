/*
#include<stdio.h>

int hashfunction(int k) {
	return k % 5;
}

int main() {
	int keyarray[6] = { 7,10,12,6,11,4 };
	int tablearray[5] = { -1,-1,-1 ,-1 ,-1 };  //-1은 데이터가 없다고 가정
											   //char형일 경우 null로 초기화
	int tempindex,start,check;
	printf("해시 테이블 : ");
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n");
	for (int i = 0; i < (int)(sizeof(keyarray) / sizeof(int)); i++) {
		check = 0;
		tempindex = hashfunction(keyarray[i]);
		if (tablearray[tempindex] == -1) {
			tablearray[tempindex] = keyarray[i];
		}
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
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
}
*/
