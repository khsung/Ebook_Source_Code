/*
#include<stdio.h>

void printarray(int array[],int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[7] = { 4,1,0,4,2,1,2 };
	int index = 0, arraysize = 7;
	int countarray[5] = { 0,0,0,0,0 };
	printf("���� �� �迭 : ");
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d  ", array[i]);
		countarray[array[i]] += 1;//���Ұ��� �ش��ϴ� �ε��� count
		array[i] = 0;            //���� �迭 0���� �ʱ�ȭ
	}
	printf("\n\n���� ����\n");
	for (int i = 0; i < sizeof(countarray) / sizeof(int); i++) {
		while (countarray[i] != 0) { //count �迭���Ұ� 0�� �ɶ�����
			array[index] = i;        //count �迭 �ε��� ���ڸ� �߰�
			index++;
			countarray[i]--;
			printarray(array, arraysize);
		}
	}

	printf("\n���� �� �迭 : ");
	printarray(array, arraysize);
}

*/

