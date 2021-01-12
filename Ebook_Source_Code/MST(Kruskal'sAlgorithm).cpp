
#include<stdio.h>
#define GRAPH_SIZE 5					//�׷��� ũ��
#define EDGE_INFO_MAX_SIZE GRAPH_SIZE*(GRAPH_SIZE-1)  //���� �ִ� ����
#define MST_SIZE GRAPH_SIZE-1			//�ּ� ���� Ʈ�� ũ��
#define INF 9999						//���Ѵ� ���� ����

//����ġ�� �������� �������� ���� (���� ����)
void sortedge(int edgeinfo[][3], int edgeinfoindex) {
	int temp;
	for (int i = edgeinfoindex - 1; i > 0; i--) {
		//���� ���� ����ġ�� �� Ŭ ��� �հ� ���� ���� ���� ��ȯ
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
	//��� �׷���
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };

	//���� ���� ���� ���� ���� {��� 1, ��� 2, ����ġ} ���� ����
	int edgeinfo[EDGE_INFO_MAX_SIZE][3] = {};	//0���� �ʱ�ȭ
	int edgeinfoindex = 0;		//���� ������ ����� ���� ����
	int MST_edge[MST_SIZE] = {};			//�ּ� ���� Ʈ�� ���� ����
	int MST_edgeindex = 0;		//�ּ� ���� Ʈ���� ����� ���� ����

	//�׷��� ����ϸ鼭 ���� ���� ����
	//�� ���� �׷����̹Ƿ� ��ȣ�� ���� ��带 ���� ����
	printf("��� �׷���\n");
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

	printf("\n���� �� ���� ����\n");
	for (int i = 0; i < edgeinfoindex; i++) {
		printf("{%d, %d, %d} ", edgeinfo[i][0], edgeinfo[i][1], edgeinfo[i][2]);
	}
	sortedge(edgeinfo, edgeinfoindex);		//���� ���� ����
	printf("\n\n���� �� ���� ����\n");
	for (int i = 0; i < edgeinfoindex; i++) {
		printf("{%d, %d, %d} ", edgeinfo[i][0], edgeinfo[i][1], edgeinfo[i][2]);
	}

	//union-find �˰����� ���� �迭 �ʱ�ȭ�ϸ鼭 ���
	int union_find[GRAPH_SIZE];
	printf("\n\n�ʱ� union_find �迭 :");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		union_find[i] = i;
		printf(" %d", union_find[i]);
	}

}