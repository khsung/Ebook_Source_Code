/*
#include<stdio.h>

//그래프 출력 함수
void printgraph(int array[][4],int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("%d  ", array[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");
}

int main() {
	int undirected[4][4] = { {0,1,1,0},{1,0,0,1},{1,0,0,1},{0,1,1,0} };
	int directed[4][4] = { {0,1,1,0},{0,0,0,1},{0,0,0,1},{0,1,1,0} };
	int weighted[4][4] = { {0,7,2,0},{7,0,0,5},{2,0,0,10},{0,5,10,0} };
	int row = 4, column = 4;
	printf("무 방향 그래프\n\n");
	printgraph(undirected,row,column);
	printf("방향 그래프\n\n");
	printgraph(directed, row, column);
	printf("가중치 그래프\n\n");
	printgraph(weighted, row, column);
}
*/