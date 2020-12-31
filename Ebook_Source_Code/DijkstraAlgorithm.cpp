
#include<stdio.h>

#define GRAPH_SIZE 5    //�׷��� ũ�� ����
#define INF 999         //���Ѵ� ��ü ��������

void printarray(int array[], int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},{2,0,INF,1,9},{8,INF,0,2,INF},{5,1,2,0,4},{INF,9,INF,4,0} };
	int path[GRAPH_SIZE] = { 0 };
	int cost[GRAPH_SIZE] = { INF, INF, INF, INF, INF };
	//�湮�ߴ��� üũ�ϴ� �迭, �迭ũ�⸸ŭ false�� �ڵ� �ʱ�ȭ
	bool visited[GRAPH_SIZE] = {};
	int min, minindex;
	int startnode = 0;

	cost[startnode] = 0;
	
	//�׷��� ���
	printf("�׷��� ���\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

	printf("\n�ʱ� ��� �迭 : ");
	printarray(cost, GRAPH_SIZE);

	for (int i = 0; i < GRAPH_SIZE; i++) {
		visited[startnode] = true;
		printf("\n���� ��� : %d\n", startnode);
		for (int j = 0; j < GRAPH_SIZE; j++) {
			if (visited[j] == false && (cost[startnode] + graph[startnode][j]) < cost[j]) {
				cost[j] = cost[startnode] + graph[startnode][j];
				path[j] = startnode;
			}
		}
		printf("���ŵ� ��� : ");
		printarray(cost, GRAPH_SIZE);
		min = INF;

		for (int j = 0; j < GRAPH_SIZE; j++) {
			if (visited[j] == false && cost[j] < min) {
				min = cost[j];
				minindex = j;
			}
		}

		if (min != INF) {
			startnode = minindex;
		}
	}

	printf("\n��� �迭 : ");
	printarray(path, GRAPH_SIZE);
	printf("\n");
	startnode = 0;
	for (int i = 0; i < GRAPH_SIZE; i++) {
		printf("������ ��� : %d  �ּҺ�� ��� : ", i);
		printf("%d", i);
		int temp = i;
		while (temp != 0) {
			temp = path[temp];
			printf(" <- %d", temp);
		}
		printf("\n");
	}

}
