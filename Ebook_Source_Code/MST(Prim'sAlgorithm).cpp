
#include<stdio.h>
#define INF 9999
#define GRAPH_SIZE 5
#define START_NODE 0

int main() {
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };
	//최소 신장 트리 간전 정보 저장, {노드, 노드, 가중치}
	int MST[GRAPH_SIZE - 1][3] = {};
	int MSTindex = 0;
	bool visited[GRAPH_SIZE] = { false };
	int min;
	int firstnode, secondnode;
	int startnode = START_NODE;
	printf("MST 간선 추가 과정\n");
	//마지막 노드는 그냥 추가만 하면 되므로 N-1개의 노드를
	//방문할 때까지 반복
	for (int i = 0; i < GRAPH_SIZE - 1; i++) {
		visited[startnode] = true;
		min = INF;

		//방문한 노드 개수만큼 간선 탐색
		for (int j = 0; j < GRAPH_SIZE; j++) {
			if (visited[j] == true) {
				for (int k = 0; k < GRAPH_SIZE; k++) {
					if (graph[visited[j]][k] < min && visited[k] == false) {
						min = graph[j][k];
						firstnode = j;
						secondnode = k;
					}
				}
			}
		}
		printf("%d,%d,%d\n",firstnode, secondnode, min);
		MST[MSTindex][0] = firstnode;
		MST[MSTindex][1] = secondnode;
		MST[MSTindex][2] = min;
		MSTindex++;
		for (int j = 0; j < MSTindex; j++) {
			//printf("{%d, %d, %d}", MST[j][0], MST[j][1], MST[j][2]);
		}
		printf("\n");
		startnode = secondnode;
	}

	int costsum = 0;
	printf("최종 MST 간선 정보\n");
}