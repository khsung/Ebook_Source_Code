/*
#include<stdio.h>
#define MAX_TABLE_SIZE 5

int hashfunction(int k) {
	return k % MAX_TABLE_SIZE;
}

int main() {
	int keyarray[6] = { 7,10,12,6,11,4 };
	//-1�� �����Ͱ� ���ٰ� ����
	//char���� ��� null�� �ʱ�ȭ
	int tablearray[MAX_TABLE_SIZE] = { -1,-1,-1 ,-1 ,-1 };
	int tempindex,start,check;
	int num;
	printf("�ؽ� ���̺� : ");
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n");
	for (int i = 0; i < (int)(sizeof(keyarray) / sizeof(int)); i++) {
		//���� ã�Ҵ��� Ȯ���ϴ� ����
		check = 0;
		//�ؽ� ���̺� �ε��� �����ϴ� ����
		tempindex = hashfunction(keyarray[i]);
		//�ؽ� ���̺��� ������� �� �ٷ� ���� ����
		if (tablearray[tempindex] == -1) {
			tablearray[tempindex] = keyarray[i];
		}
		//�ؽ� ���̺� ���Ұ� �̹� ������ �� ���ʷ� ���� �ε��� Ȯ��
		//�� ������ ���� �� ���� �˻�, ���� ť�� ���� ����
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
	//�ؽ����̺� ���
	for (int i = 0; i < (int)(sizeof(tablearray) / sizeof(int)); i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\nã�� ���� : ");
	scanf_s("%d", &num);
	tempindex = hashfunction(num);
	check = 0;
	do {
		if (num == tablearray[tempindex]) {
			printf("%d�� %d �ε����� ����\n", num, tempindex);
			check = 1;
			break;
		}
		tempindex = (tempindex + 1) % ((int)(sizeof(tablearray) / sizeof(int)));
	} while (tempindex!= hashfunction(num));
	if (check == 0) {
		printf("%d�� ���� ����\n", num);
	}
}
*/
