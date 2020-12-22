/*
#include<stdio.h>
#define ARRAY_SIZE 5

void printarray(int array[], int size) { //�迭 ��� �Լ�
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

//������ �迭�� �����ϸ鼭 ��ġ�� �Լ�
void merge(int array[], int left, int mid, int right) {
	int l = left, tempindex = left, m = mid;
	//�ӽ����� �ϱ� ���� �迭 ����
	int temp[ARRAY_SIZE] = { 0 };

	//left~mid, mid+1~right �̷��� �ε����� ���� ����
	//�� �迭�� ���������� �ӽù迭�� ����
	while (l <= mid && m+1<=right) {
		if (array[l] < array[m + 1]) {
			temp[tempindex] = array[l];
			tempindex++;
			l++;
		}
		else {
			temp[tempindex] = array[m + 1];
			tempindex++;
			m++;
		}
	}

	//�Ѱ��� �迭�� �� �ӽ����� �迭�� �־��� ��
	//������ �迭�� �ӽù迭���� �� ū�����
	//�������� ���ĵǾ� �����Ƿ� �ӽù迭��
	//���� ���� ���ҵ��� ���ʷ� �־���
	//m + 1 > right�̸� ������ �迭�� �� �ְ�
	//���� �迭�� ���Ҵٴ� ��
	if (m + 1 > right) {
		while (l <= mid) {
			temp[tempindex] = array[l];
			tempindex++;
			l++;
		}
	}
	//���� �迭�� �� �ְ� ������ �迭�� ����
	else {
		while (m + 1 <= right) {
			temp[tempindex] = array[m + 1];
			tempindex++;
			m++;
		}
	}

	//�ӽ����� �迭�� ���� �迭�� ��������
	for (int i = left; i <= right; i++) {
		array[i] = temp[i];
	}
	printf("temp �迭 : ");
	printarray(temp, ARRAY_SIZE);
	printf("���� �迭 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n");
}

//�迭 ����� 1�� �� ������ �ε����� ������
void mergesort(int array[], int left, int right) {
	int mid;
	//left == right�� ��� ����� 1�̴�
	if (left < right) {
		//c������ int���� �������� ���
		//������ �� (Ex. 3/2==1)
		mid = (left + right) / 2;

		//���� �迭
		mergesort(array, left, mid);
		//������ �迭
		mergesort(array, mid + 1, right);
		//������ ������ �迭�� �����ϸ鼭 ��ħ
		merge(array, left, mid, right);
	}
}

int main() {
	int array[ARRAY_SIZE] = { 5,4,2,3,1 };
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n====== ���� ���� ======\n");
	mergesort(array, 0, ARRAY_SIZE - 1);
	printf("���� �� �迭 : ");
	printarray(array, ARRAY_SIZE);
}
*/