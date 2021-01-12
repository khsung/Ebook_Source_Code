
#include<stdio.h>
#define GRAPH_SIZE 5					//그래프 크기
#define EDGE_INFO_MAX_SIZE GRAPH_SIZE*(GRAPH_SIZE-1)  //간선 최대 개수
#define MST_SIZE GRAPH_SIZE-1			//최소 신장 트리 크기
#define INF 9999						//무한대 변수 선언

//가중치를 기준으로 오름차순 정렬 (버블 정렬)
void sortedge(int edgeinfo[][3], int edgeinfoindex) {
	int temp;
	for (int i = edgeinfoindex - 1; i > 0; i--) {
		//앞의 간선 가중치가 더 클 경우 앞과 뒤의 간선 정보 교환
		for (int j = 0; j < i; j++) {
			if (edgeinfo[j][2] > edgeinfo[j + 1][2]) {
				temp = edgeinfo[j][0];
				edgeinfo[j][0] = edgeinfo[j + 1][0];
				edgeinfo[j + 1][0] = temp;
				temp = edgeinfo[j][1];
				edgeinfo[j][1] = edgeinfo[j + 1][1];
				edgeinfo[j + 1][1] = temp;
				temp = edgeinfo[j][2];
				edgeinfo[j][2] = edgeinfo[j + 1][2];
				edgeinfo[j + 1][2] = temp;
			}
		}
	}
}

int main() {
	//행렬 그래프
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };

	//간선 정보 저장 변수 선언 {노드 1, 노드 2, 가중치} 저장 예정
	int edgeinfo[EDGE_INFO_MAX_SIZE][3] = {};	//0으로 초기화
	int edgeinfoindex = 0;		//간선 정보에 저장된 간선 개수
	int MST_edge[MST_SIZE] = {};			//최소 신장 트리 간선 저장
	int MST_edgeindex = 0;		//최소 신장 트리에 저장된 간선 개수

	//그래프 출력하면서 간선 정보 저장
	//무 방향 그래프이므로 번호가 적은 노드를 먼저 저장
	printf("행렬 그래프\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
			if (graph[i][j] != INF && i < j) {
				edgeinfo[edgeinfoindex][0] = i;
				edgeinfo[edgeinfoindex][1] = j;
				edgeinfo[edgeinfoindex][2] = graph[i][j];
				edgeinfoindex++;
			}
		}
		printf("\n");
	}

	printf("\n정렬 전 간선 정보\n");
	for (int i = 0; i < edgeinfoindex; i++) {
		printf("{%d, %d, %d} ", edgeinfo[i][0], edgeinfo[i][1], edgeinfo[i][2]);
	}
	sortedge(edgeinfo, edgeinfoindex);		//간선 정보 정렬
	printf("\n\n정렬 된 간선 정보\n");
	for (int i = 0; i < edgeinfoindex; i++) {
		printf("{%d, %d, %d} ", edgeinfo[i][0], edgeinfo[i][1], edgeinfo[i][2]);
	}

	//union-find 알고리즘을 위한 배열 초기화하면서 출력
	int union_find[GRAPH_SIZE];
	printf("\n\n초기 union_find 배열 :");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		union_find[i] = i;
		printf(" %d", union_find[i]);
	}

}