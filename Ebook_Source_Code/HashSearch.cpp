
#include<stdio.h>

int hashfunction(int k) {
	return k % 5;
}

int main() {
	int keyarray[3] = { 7,10,12 };
	int tablearray[5] = { -1,-1,-1 ,-1 ,-1 };
	int tempindex,start,check;
	for (int i = 0; i < (int)(sizeof(keyarray) / sizeof(int)); i++) {
		check = 0;
		tempindex = hashfunction(keyarray[i]);
		if (tablearray[tempindex] == -1) {
			tablearray[tempindex] = keyarray[i];
		}
		else {
			start = tempindex;
			tempindex = (tempindex + 1) % (int)(sizeof(keyarray) / sizeof(int));
			while (tempindex != start) {
				if (tablearray[tempindex] == -1) {
					tablearray[tempindex] = keyarray[i];
					check = 1;
					break;
				}
				else {
					tempindex = (tempindex + 1) % (int)(sizeof(keyarray) / sizeof(int));
				}
			}
		}
		if (check == 0) {
			printf("포화 해시 테이블\n");
		}
	}
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
}