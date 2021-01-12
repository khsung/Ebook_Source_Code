
/*
#include<stdio.h>
#define INF 9999			//무한대 변수 선언
#define GRAPH_SIZE 5		//그래프 노드 개수
#define START_NODE 0		//시작 노드

int main() {
	//그래프 정보
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };

	//최소 신장 트리 간선 정보 저장, {노드, 노드, 가중치}
	int MST[GRAPH_SIZE - 1][3] = {};
	int MSTindex = 0;
	//방문한 노드인지 체크
	bool visited[GRAPH_SIZE] = { false };
	//최소 비용 간선 저장 변수
	int min, firstnode, secondnode;
	int startnode = START_NODE;

	printf("MST 간선 추가 과정\n");
	//마지막 노드는 그냥 추가만 하면 되므로 N-1개의 노드를
	//방문할 때까지 반복
	for (int i = 0; i < GRAPH_SIZE - 1; i++) {
		//방문한 노드로 갱신
		visited[startnode] = true;
		min = INF;

		//전체 노드 탐색
		for (int j = 0; j < GRAPH_SIZE; j++) {
			//방문한 노드와 방문하지 않은 노드 사이의 간선 중
			//최소 비용 갖는 간선 탐색
			if (visited[j] == true) {
				for (int k = 0; k < GRAPH_SIZE; k++) {
					if (graph[j][k] < min && visited[k] == false) {
						min = graph[j][k];
						firstnode = j;
						secondnode = k;
					}
				}
			}
		}
		//간선 정보 저장
		MST[MSTindex][0] = firstnode;
		MST[MSTindex][1] = secondnode;
		MST[MSTindex][2] = min;
		MSTindex++;
		for (int j = 0; j < MSTindex; j++) {
			printf("{%d, %d, %d} ", MST[j][0], MST[j][1], MST[j][2]);
		}
		printf("\n");
		startnode = secondnode;
	}

	//비용 합 저장 변수
	int costsum = 0;
	printf("\n최종 MST 간선 정보\n");
	for (int j = 0; j < MSTindex; j++) {
		printf("노드 %d 노드 %d 가중치 : %d\n",MST[j][0],MST[j][1],MST[j][2]);
		costsum += MST[j][2];
	}
	printf("\n최종 비용 : %d\n", costsum);
}
*/