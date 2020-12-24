
#include<stdio.h>
#include<stdlib.h>
#define MAX_CHESS_SIZE 14
int count = 0;    //퀸을 놓을 수 있는 경우의 수

void AddAttackLine(int chess[][MAX_CHESS_SIZE],int row,int column ,int N) {
	int r, c;
	//퀸이 놓인 위치를 기준으로 가로, 세로 공격라인 추가
	for (int i = 0; i < N; i++) {
		chess[row][i] += 1;
		chess[i][column] += 1;
	}
	chess[row][column] -= 1;

	//퀸의 오른쪽 위 대각선
	r = row - 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r--, c++;
	}

	//퀸의 오른쪽 아래 대각선
	r = row + 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r++, c++;
	}

	//퀸의 왼쪽 위 대각선
	r = row - 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r--, c--;
	}

	//퀸의 왼쪽 아래 대각선
	r = row + 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] += 1;
		r++, c--;
	}
}

void DelAttackLine(int chess[][MAX_CHESS_SIZE], int row, int column, int N) {
	int r, c;
	//퀸이 놓인 위치를 기준으로 가로, 세로 공격라인 삭제
	for (int i = 0; i < N; i++) {
		chess[row][i] -= 1;
		chess[i][column] -= 1;
	}
	chess[row][column] += 1;

	//퀸의 오른쪽 위 대각선
	r = row - 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r--, c++;
	}

	//퀸의 오른쪽 아래 대각선
	r = row + 1, c = column + 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r++, c++;
	}

	//퀸의 왼쪽 위 대각선
	r = row - 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r--, c--;
	}

	//퀸의 왼쪽 아래 대각선
	r = row + 1, c = column - 1;
	while (0 <= r && r < N && 0 <= c && c < N) {
		chess[r][c] -= 1;
		r++, c--;
	}
}

void N_Queen(int chess[][MAX_CHESS_SIZE], int row, int N) {
	if (row < N - 1) {
		for (int i = 0; i < N; i++) {
			//공격라인이 지나지 않을 경우
			if (chess[row][i] == 0) {
				//현재위치에 퀸을 놓고 공격라인 추가 
				AddAttackLine(chess, row, i, N);
				//다음 행으로 넘어감
				N_Queen(chess, row+1, N);
				//해당위치의 퀸과 공격라인 삭제
				DelAttackLine(chess, row, i, N);
			}
		}
	}

	//마지막 행일 경우
	else {
		for (int i = 0; i < N; i++) {
			//공격라인이 겹치지 않는 열만큼 경우의 수 증가
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
	printf("퀸을 놓을 수 있는 경우의 수 : %d", count);
}