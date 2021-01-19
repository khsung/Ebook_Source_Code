
#include<stdio.h>
#define INF 9999								//무한대 상수변수 선언
#define GRAPH_SIZE 5							//그래프 노드 개수 선언
#define STARTNODE 0								//시작 노드 선언
#define MAX_EDGE_NUM GRAPH_SIZE*(GRAPH_SIZE-1)	//최대 간선의 개수

//비용 배열 초기화
void initcost(int cost[GRAPH_SIZE], int startnode) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
		cost[i] = INF;
	}
	cost[startnode] = 0;
}

//비용 배열 출력
void printcost(int cost[GRAPH_SIZE]) {
	printf("비용 배열 : ");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		printf("%d ", cost[i]);
	}
	printf("\n");
}

//벨만 포드 알고리즘
bool bellmanford(int graph[][GRAPH_SIZE],int cost[],int edgeinfo[][3],int edgeinfosize){
	int curr, next, edgecost;				//현재 노드, 다음 노드, 간선의 비용
	//노드 개수 만큼 반복
	for (int i = 0; i < GRAPH_SIZE; i++) {
		//전체 간선을 고려
		for (int j = 0; j < edgeinfosize; j++) {
			curr = edgeinfo[j][0];
			next = edgeinfo[j][1];
			edgecost = edgeinfo[j][2];

			//현재 노드와 다음 노드까지의 비용을 더한 값이 비용 배열에 저장 되어있는
			//다음 노드까지의 비용보다 적을 경우 갱신
			if (cost[next] > cost[curr] + edgecost) {
				cost[next] = cost[curr] + edgecost;
				//마지막 노드에서도 비용 갱신이 되면 음의 순환이 존재한다는 의미
				if (i == GRAPH_SIZE - 1) {
					return false;
				}
			}
		}
		printcost(cost);		//매번 갱신된 비용 배열 출력
	}
	return true;				//음의 순환이 존재하지 않을 경우 true반환
}

//음의 순환이 있는지 출력하는 함수
void judgecycle(bool result, int cost[GRAPH_SIZE]) {
	if (result == true) {
		printf("\n음의 순환이 없는 그래프\n");
		printcost(cost);
	}
	else {
		printf("\n음의 순환이 있는 그래프\n");
	}
}

int main() {
	int startnode = STARTNODE;				//시작 노드 저장
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,6,4,9,INF},
										  {-3,0,INF,1,6},
										  {-3,INF,0,2,INF},
										  {INF,INF,INF,0,4},
										  {INF,2,INF,INF,0} };

	int cost[GRAPH_SIZE];					//비용 배열 선언
	initcost(cost, startnode);				//비용 배열 초기화
	//간선 정보 배열, {시작 노드, 도착 노드, 가중치} 형태로 저장 예정
	int edgeinfo[MAX_EDGE_NUM][3];
	int edgeinfosize = 0;			//간선의 총 개수

	//행렬 그래프 출력하면서 각 노드별 간선 정보 저장 
	printf("첫 번째 그래프 행렬\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d  ", graph[i][j]);
			if (graph[i][j] != 0 && graph[i][j] != INF) {
				edgeinfo[edgeinfosize][0] = i;
				edgeinfo[edgeinfosize][1] = j;
				edgeinfo[edgeinfosize][2] = graph[i][j];
				edgeinfosize++;
			}
		}
		printf("\n");
	}
	printf("\n갱신 과정\n");
	int res = bellmanford(graph, cost, edgeinfo, edgeinfosize);
	judgecycle(res, cost);

	initcost(cost, startnode);			//두 번째 그래프를 위한 비용 배열 초기화
	int cyclegraph[GRAPH_SIZE][GRAPH_SIZE] = { {0,6,4,9,INF},
											   {-30,0,INF,1,6},
											   {-3,INF,0,2,INF},
											   {INF,INF,INF,0,4},
											   {INF,2,INF,INF,0} };

	//행렬 그래프 출력하면서 각 노드별 간선 정보 저장 
	printf("\n두 번째 그래프 행렬\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d  ", cyclegraph[i][j]);
			if (cyclegraph[i][j] != 0 && cyclegraph[i][j] != INF) {
				edgeinfo[edgeinfosize][0] = i;
				edgeinfo[edgeinfosize][1] = j;
				edgeinfo[edgeinfosize][2] = cyclegraph[i][j];
				edgeinfosize++;
			}
		}
		printf("\n");
	}
	printf("\n갱신 과정\n");
	res = bellmanford(cyclegraph, cost, edgeinfo, edgeinfosize);
	judgecycle(res, cost);
}
