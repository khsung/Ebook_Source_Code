/*
#include<stdio.h>
#define MAX_TABLE_SIZE 5
#define DATA_SIZE 6

int hashfunction(int k) {		//�ؽ� �Լ�
	return k % MAX_TABLE_SIZE;
}

int main() {
	//�ؽ� ���̺� �߰��� ������
	int dataarray[DATA_SIZE] = { 7,10,12,6,11,4 };
	//-1�� �����Ͱ� ���ٰ� ����, char���� ��� null�� �ʱ�ȭ
	int tablearray[MAX_TABLE_SIZE] = { -1, -1, -1, -1, -1 };
	int tempindex, start, check;
	int num;		//�Է� ���� ���� ����

	printf("�ؽ� ���̺� : ");
	//�ؽ� ���̺� ���
	for (int i = 0; i < MAX_TABLE_SIZE; i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\n");

	for (int i = 0; i < DATA_SIZE; i++) {
		//���Ҹ� �־����� Ȯ���ϴ� ����
		check = 0;
		//�ؽ� ���̺� �ε��� �����ϴ� ����
		tempindex = hashfunction(dataarray[i]);
		//�ؽ� ���̺��� ������� �� �ٷ� ���� ����
		if (tablearray[tempindex] == -1) {
			tablearray[tempindex] = dataarray[i];
		}
		//�ؽ� ���̺� ���Ұ� �̹� ������ �� ���ʷ� ���� �ε��� Ȯ��
		//�� ������ ���� �� ���� �˻�
		else {
			start = tempindex;
			tempindex = (tempindex + 1) % MAX_TABLE_SIZE;
			//�ݺ��� ���� ����ִ� �ε��� Ž��
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
				printf("��ȭ �ؽ� ���̺�\n");
			}
		}
	}
	printf("�ؽ� ���̺� : ");
	//�ؽ����̺� ���
	for (int i = 0; i < MAX_TABLE_SIZE; i++) {
		printf("%d  ", tablearray[i]);
	}
	printf("\nã�� ���� : ");
	scanf_s("%d", &num);
	tempindex = hashfunction(num);
	check = 0;			//���Ҹ� ã�Ҵ��� Ȯ���ϴ� ����
	do {
		if (num == tablearray[tempindex]) {
			printf("%d�� %d �ε����� ����\n", num, tempindex);
			check = 1;
			break;
		}
		tempindex = (tempindex + 1) % MAX_TABLE_SIZE;
	} while (tempindex!= hashfunction(num));
	if (check == 0) {
		printf("%d�� ���� ����\n", num);
	}
}
*/
