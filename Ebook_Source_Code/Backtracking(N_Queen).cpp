
#include<stdio.h>
#include<stdlib.h>
#define MAX_CHESS_SIZE 14
int count = 0;    //���� ���� �� �ִ� ����� ��

void AddAttackLine(int chess[][MAX_CHESS_SIZE],int row,int column ,int N) {
	int r, c;
	//���� ���� ��ġ�� �������� ����, ���� ���ݶ��� �߰�
	for (int i = 0; i < N; i++) {
		chess[row][i] += 1;
		chess[i][column] += 1;
	}
	chess[row][column] -= 1;

	//���� ������ �� �밢��
	r = row - 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r--, c++;
	}

	//���� ������ �Ʒ� �밢��
	r = row + 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r++, c++;
	}

	//���� ���� �� �밢��
	r = row - 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r--, c--;
	}

	//���� ���� �Ʒ� �밢��
	r = row + 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r++, c--;
	}
}

void DelAttackLine(int chess[][MAX_CHESS_SIZE], int row, int column, int N) {
	int r, c;
	//���� ���� ��ġ�� �������� ����, ���� ���ݶ��� ����
	for (int i = 0; i < N; i++) {
		chess[row][i] -= 1;
		chess[i][column] -= 1;
	}
	chess[row][column] += 1;

	//���� ������ �� �밢��
	r = row - 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r--, c++;
	}

	//���� ������ �Ʒ� �밢��
	r = row + 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r++, c++;
	}

	//���� ���� �� �밢��
	r = row - 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r--, c--;
	}

	//���� ���� �Ʒ� �밢��
	r = row + 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r++, c--;
	}
}

void N_Queen(int chess[][MAX_CHESS_SIZE], int row, int N) {
	if (row < N - 1) {
		for (int i = 0; i < N; i++) {
			//���ݶ����� ������ ���� ���
			if (chess[row][i] == 0) {
				//������ġ�� ���� ���� ���ݶ��� �߰� 
				AddAttackLine(chess, row, i, N);
				//���� ������ �Ѿ
				N_Queen(chess, row+1, N);
				//�ش���ġ�� ���� ���ݶ��� ����
				DelAttackLine(chess, row, i, N);
			}
		}
	}

	//������ ���� ���
	else {
		for (int i = 0; i < N; i++) {
			//���ݶ����� ��ġ�� �ʴ� ����ŭ ����� �� ����
			if (chess[row][i] == 0) {
				count++;
			}
		}
	}
}

int main() {
	int chess[MAX_CHESS_SIZE][MAX_CHESS_SIZE] = { 0 };
	int num;
	printf("Input N (0 <= N < 15): ");
	scanf_s("%d", &num);
	N_Queen(chess, 0, num);
	printf("���� ���� �� �ִ� ����� �� : %d", count);
}