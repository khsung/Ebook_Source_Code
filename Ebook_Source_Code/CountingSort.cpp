/*
#include<stdio.h>
#define ARRAY_SIZE 7		//�迭 ũ�� ����
#define MAX_NUM 4			//���� �ִ밪 ����

//�迭 ��� �Լ�
void printarray(int array[],int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int array[ARRAY_SIZE] = { 4,1,0,4,2,1,2 };
	int index = 0;
	int countarray[MAX_NUM + 1] = { 0,0,0,0,0 };

	printf("���� �� �迭 : ");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d  ", array[i]);
		//���Ұ��� �ش��ϴ� �ε��� count
		countarray[array[i]] += 1;
		array[i] = 0;            //���� �迭 0���� �ʱ�ȭ
	}
	printf("\n\n��� ���� ����\n");
	for (int i = 0; i < (MAX_NUM + 1); i++) {
		//count �迭���Ұ� 0�� �ɶ����� count �迭 �ε��� ���ڸ� �߰�
		while (countarray[i] != 0) {
			array[index] = i;
			index++;
			countarray[i]--;
			printarray(array, ARRAY_SIZE);
		}
	}

	printf("\n���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}

*/