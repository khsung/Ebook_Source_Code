/*
#include<stdio.h>

int hashfunction(int k) {
	return k % 5;
}

int main() {
	int keyarray[6] = { 7,10,12,6,11,4 };
	int tablearray[5] = { -1,-1,-1 ,-1 ,-1 };  //-1�� �����Ͱ� ���ٰ� ����
											   //char���� ��� null�� �ʱ�ȭ
	int tempindex,start,check;
	printf("�ؽ� ���̺� : ");
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
				printf("��ȭ �ؽ� ���̺�\n");
			}
		}
	}
	printf("�ؽ� ���̺� : ");
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
}
*/
