/*
#include<stdio.h>
#define GRAPH_SIZE 5    //그래프 크기 선언
#define INF 999         //무한대 대체 변수선언 상황에 따라 변경
#define STARTNODE 0     //시작노드 선언

//배열 출력 함수
void printarray(int array[], int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	//그래프 행렬 선언
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0, 2, 8, 5, INF},
										  {2, 0, INF, 1, 9},
										  {8, INF, 0, 2, INF},
										  {5, 1, 2, 0, 4},
										  {INF, 9, INF, 4, 0} };
	//경로 저장 배열 선언
	int path[GRAPH_SIZE] = { 0 };
	//비용 저장 배열 선언
	int cost[GRAPH_SIZE] = { INF, INF, INF, INF, INF };

	//방문했는지 체크하는 배열, 배열크기만큼 false로 자동 초기화
	bool visited[GRAPH_SIZE] = {};
	int min, minindex;            //최소값과 최소값의 인덱스 저장 변수
	int startnode = STARTNODE;    //시작 노드 저장
	cost[startnode] = 0;          //시작 노드 비용 갱신


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

	//노드 개수만큼 반복
	for (int i = 0; i < GRAPH_SIZE; i++) {
		//방문한 노드로 변경
		visited[startnode] = true;
		printf("\n시작 노드 : %d\n", startnode);
		for (int j = 0; j < GRAPH_SIZE; j++) {
			//방문하지 않은 노드 중 비용이 더 적을 경우 비용 배열 갱신
			if ((visited[j]==false)&&((cost[startnode]+graph[startnode][j])<cost[j])){
				cost[j] = cost[startnode] + graph[startnode][j];
				path[j] = startnode;
			}
		}

		printf("갱신된 비용 배열 : ");
		printarray(cost, GRAPH_SIZE);
		min = INF;

		//방문하지 않은 노드 중 최소값과 최소값의 인덱스 구하는 반복문
		for (int j = 0; j < GRAPH_SIZE; j++) {
			if (visited[j] == false && cost[j] < min) {
				min = cost[j];
				minindex = j;
			}
		}

		//min이 무한대일 경우는 모든 노드를 방문했단 뜻
		if (min != INF) {
			startnode = minindex;
		}
	}

	printf("\n경로 배열 : ");
	printarray(path, GRAPH_SIZE);
	printf("\n");
	startnode = STARTNODE;       //초기 시작노드로 초기화

	for (int i = 0; i < GRAPH_SIZE; i++) {
		printf("목적지 노드 : %d  최소비용 경로 : ", i);
		printf("%d", i);

		//현재노드 임시저장
		int temp = i;
		while (temp != startnode) {
			//경로 배열의 값은 다음 인덱스를 의미
			temp = path[temp];
			printf(" <- %d", temp);
		}
		printf("\n\n");
	}
}
*/