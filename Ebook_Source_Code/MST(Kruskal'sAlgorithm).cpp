
#include<stdio.h>
#define GRAPH_SIZE 5					//그래프 크기
#define EDGE_INFO_MAX_SIZE GRAPH_SIZE*(GRAPH_SIZE-1)  //간선 최대 개수
#define MST_SIZE GRAPH_SIZE-1			//최소 신장 트리 크기
#define INF 9999						//무한대 변수 선언

//가중치를 기준으로 오름차순 정렬 (버블 정렬)
void sortedge(int edgeinfo[][3], int edgeinfoindex) {
	int temp;
	for (int i = edgeinfoindex - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			//앞의 간선 가중치가 더 클 경우 앞과 뒤의 간선 정보 교환
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

//find함수, 해당 노드의 root 노드 반환
//root 노드 : 자기 자신을 가리키는 노드
int find(int union_find[], int index) {
	if (union_find[index] == index)
		return index;
	else
		return union_find[index] = find(union_find, union_find[index]);
}

//union함수, 자식 노드와 부모 노드 연결
void unionfunc(int union_find[], int parent, int child) {
	parent = find(union_find, parent);
	child = find(union_find, child);
	union_find[child] = parent;
}

int main() {
	//행렬 그래프
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };

	//간선 정보 저장 변수 선언 {노드 1, 노드 2, 가중치} 저장 예정, 0으로 초기화
	int edgeinfo[EDGE_INFO_MAX_SIZE][3] = {};
	int edgeinfoindex = 0;				//간선 정보에 저장된 간선 개수
	int MST_edge[MST_SIZE][3] = {};		//최소 신장 트리 간선 저장
	int MST_edgeindex = 0;				//최소 신장 트리에 저장된 간선 개수

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
	for (int i = 0; i < edgeinfoindex; i++) {
		//서로 root 노드가 다르다면 부모, 자식 노드로 연결하고 MST에 간선 정보 추가
		if (find(union_find, edgeinfo[i][0]) != find(union_find, edgeinfo[i][1])) {
			unionfunc(union_find, edgeinfo[i][0], edgeinfo[i][1]);
			printf("\n\nunion_find 배열 : ");
			for (int j = 0; j < GRAPH_SIZE; j++) {
				printf("%d ", union_find[j]);
			}
			MST_edge[MST_edgeindex][0] = edgeinfo[i][0];
			MST_edge[MST_edgeindex][1] = edgeinfo[i][1];
			MST_edge[MST_edgeindex][2] = edgeinfo[i][2];
			MST_edgeindex++;
			printf("\n추가된 MST 간선 : {%d, %d, %d}",edgeinfo[i][0],edgeinfo[i][1],edgeinfo[i][2]);
		}
		//서로 root 노드가 같다면 사이클 형성되는 것으로 판단
		else {
			printf("\n노드 %d, 노드 %d 사이클 발생", edgeinfo[i][0], edgeinfo[i][1]);
		}
	}
	int costsum = 0;		//비용 합 저장 변수
	printf("\n\n최종 최소 신장 트리 간선 정보\n");
	for (int i = 0; i < MST_edgeindex; i++) {
		printf("노드 %d, 노드 %d 가중치 : %d\n", MST_edge[i][0], MST_edge[i][1], MST_edge[i][2]);
		costsum += MST_edge[i][2];
	}
	printf("\n최종 비용 : %d", costsum);
}