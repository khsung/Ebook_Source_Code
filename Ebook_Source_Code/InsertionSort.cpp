/*
#include<stdio.h>
#define ARRAY_SIZE 5						//�迭 ũ�� ����

void printarray(int* array, int size) {     //�迭 ���
	for (int i = 0; i < size; i++) {
		printf("%d   ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 2, 3, 1, 5, 4 };
	int tempindex, temp;
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);

	printf("\n\n���� ���� ����\n");
	//������ �ε��� �ݺ�, 0��° �ε����� ���ĵǾ� �ִٰ� ����
	for (int i = 1; i < ARRAY_SIZE; i++) {
		tempindex = i;
		//���� ���Ұ� ���� ���Һ��� Ŭ ������ �ݺ��Ͽ� ��ȯ 
		while (tempindex >= 1 && (array[tempindex] < array[tempindex - 1])) {
			temp = array[tempindex];
			array[tempindex] = array[tempindex - 1];
			array[tempindex - 1] = temp;
			tempindex--;
		}
		printarray(array, ARRAY_SIZE);
	}
	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}
*/
