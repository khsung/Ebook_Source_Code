/*
#include<stdio.h>
#define ARRAY_SIZE 10		//�迭 ũ�� ����

int main() {
	int answer;
	bool check = false;		//���Ұ� �ִ��� üũ�ϴ� ����
	int array[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("���� �迭 : ");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array[i]);
	}
	printf("\nã�� ���� �Է� : ");
	scanf_s("%d", &answer);

	//�ε��� 0���� ���ʴ�� �˻�(���� Ž��)
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		if (array[i] == answer) {
			printf("\n%d �˻� �Ϸ�, �ε��� : %d", array[i], i);
			check = true;
		}
	}
	if (check == false) {
		printf("�ش� ���� ����\n");
	}
}
*/
