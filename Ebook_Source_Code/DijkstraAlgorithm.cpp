
#include<stdio.h>

#define GRAPH_SIZE 5    //그래프 크기 선언
#define INF 999         //무한대 대체 변수선언

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
	//방문했는지 체크하는 배열, 배열크기만큼 false로 자동 초기화
	bool visited[GRAPH_SIZE] = {};
	int min, minindex;
	int startnode = 0;

	cost[startnode] = 0;
	
	//그래프 출력
	printf("그래프 행렬\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

	printf("\n초기 비용 배열 : ");
	printarray(cost, GRAPH_SIZE);

	for (int i = 0; i < GRAPH_SIZE; i++) {
		visited[startnode] = true;
		printf("\n시작 노드 : %d\n", startnode);
		for (int j = 0; j < GRAPH_SIZE; j++) {
			if (visited[j] == false && (cost[startnode] + graph[startnode][j]) < cost[j]) {
				cost[j] = cost[startnode] + graph[startnode][j];
				path[j] = startnode;
			}
		}
		printf("갱신된 비용 : ");
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

	printf("\n경로 배열 : ");
	printarray(path, GRAPH_SIZE);
	printf("\n");
	startnode = 0;
	for (int i = 0; i < GRAPH_SIZE; i++) {
		printf("목적지 노드 : %d  최소비용 경로 : ", i);
		printf("%d", i);
		int temp = i;
		while (temp != 0) {
			temp = path[temp];
			printf(" <- %d", temp);
		}
		printf("\n");
	}

}
