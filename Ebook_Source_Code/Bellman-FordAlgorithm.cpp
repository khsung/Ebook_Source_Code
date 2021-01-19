
#include<stdio.h>
#define INF 9999								//���Ѵ� ������� ����
#define GRAPH_SIZE 5							//�׷��� ��� ���� ����
#define STARTNODE 0								//���� ��� ����
#define MAX_EDGE_NUM GRAPH_SIZE*(GRAPH_SIZE-1)	//�ִ� ������ ����

//��� �迭 �ʱ�ȭ
void initcost(int cost[GRAPH_SIZE], int startnode) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
		cost[i] = INF;
	}
	cost[startnode] = 0;
}

//��� �迭 ���
void printcost(int cost[GRAPH_SIZE]) {
	printf("��� �迭 : ");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		printf("%d ", cost[i]);
	}
	printf("\n");
}

//���� ���� �˰���
bool bellmanford(int graph[][GRAPH_SIZE],int cost[],int edgeinfo[][3],int edgeinfosize){
	int curr, next, edgecost;				//���� ���, ���� ���, ������ ���
	//��� ���� ��ŭ �ݺ�
	for (int i = 0; i < GRAPH_SIZE; i++) {
		//��ü ������ ���
		for (int j = 0; j < edgeinfosize; j++) {
			curr = edgeinfo[j][0];
			next = edgeinfo[j][1];
			edgecost = edgeinfo[j][2];

			//���� ���� ���� �������� ����� ���� ���� ��� �迭�� ���� �Ǿ��ִ�
			//���� �������� ��뺸�� ���� ��� ����
			if (cost[next] > cost[curr] + edgecost) {
				cost[next] = cost[curr] + edgecost;
				//������ ��忡���� ��� ������ �Ǹ� ���� ��ȯ�� �����Ѵٴ� �ǹ�
				if (i == GRAPH_SIZE - 1) {
					return false;
				}
			}
		}
		printcost(cost);		//�Ź� ���ŵ� ��� �迭 ���
	}
	return true;				//���� ��ȯ�� �������� ���� ��� true��ȯ
}

//���� ��ȯ�� �ִ��� ����ϴ� �Լ�
void judgecycle(bool result, int cost[GRAPH_SIZE]) {
	if (result == true) {
		printf("\n���� ��ȯ�� ���� �׷���\n");
		printcost(cost);
	}
	else {
		printf("\n���� ��ȯ�� �ִ� �׷���\n");
	}
}

int main() {
	int startnode = STARTNODE;				//���� ��� ����
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,6,4,9,INF},
										  {-3,0,INF,1,6},
										  {-3,INF,0,2,INF},
										  {INF,INF,INF,0,4},
										  {INF,2,INF,INF,0} };

	int cost[GRAPH_SIZE];					//��� �迭 ����
	initcost(cost, startnode);				//��� �迭 �ʱ�ȭ
	//���� ���� �迭, {���� ���, ���� ���, ����ġ} ���·� ���� ����
	int edgeinfo[MAX_EDGE_NUM][3];
	int edgeinfosize = 0;			//������ �� ����

	//��� �׷��� ����ϸ鼭 �� ��庰 ���� ���� ���� 
	printf("ù ��° �׷��� ���\n");
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
	printf("\n���� ����\n");
	int res = bellmanford(graph, cost, edgeinfo, edgeinfosize);
	judgecycle(res, cost);

	initcost(cost, startnode);			//�� ��° �׷����� ���� ��� �迭 �ʱ�ȭ
	int cyclegraph[GRAPH_SIZE][GRAPH_SIZE] = { {0,6,4,9,INF},
											   {-30,0,INF,1,6},
											   {-3,INF,0,2,INF},
											   {INF,INF,INF,0,4},
											   {INF,2,INF,INF,0} };

	//��� �׷��� ����ϸ鼭 �� ��庰 ���� ���� ���� 
	printf("\n�� ��° �׷��� ���\n");
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
	printf("\n���� ����\n");
	res = bellmanford(cyclegraph, cost, edgeinfo, edgeinfosize);
	judgecycle(res, cost);
}
