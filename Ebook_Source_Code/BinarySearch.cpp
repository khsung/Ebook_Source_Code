/*
#include<stdio.h>
#include<math.h>
#define ARRAY_SIZE 7				//�迭 ũ�� ����

int main() {
	int answer;
	bool check;						//���Ұ� �ִ��� üũ�ϴ� ����
	int array[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7 };
	int left = 0;					//���� �� �ε���
	int right = ARRAY_SIZE - 1;		//������ �� �ε���
	int mid;						//�߰� �ε���

	printf("���� �迭 : ");			//���� �迭 ���
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array[i]);
	}

	for (int i = 0; i < 2; i++) {
		check = false;
		printf("\nã�� ���� �Է� : ");
		scanf_s("%d", &answer);

		while (left <= right) {
			mid = floor((left + right) / 2);
			//�߰� ���� ã�� ���� ���
			if (array[mid] == answer) {
				printf("%d �˻� �Ϸ�, �ε��� : %d", array[mid], mid);
				check = true;
				break;
			}
			//�߰� ������ ã�� ���� �� ���� ���
			else if (array[mid] > answer) {
				right = mid - 1;
			}
			//�߰� ������ ã�� ���� �� Ŭ ���
			else {
				left = mid + 1;
			}
		}
		if (check == false) {
			printf("�ش� ���� ����\n");
		}
	}
}
*/
