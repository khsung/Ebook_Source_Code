
#include<stdio.h>
#define GRAPH_SIZE 5					//�׷��� ũ��
#define EDGE_INFO_MAX_SIZE GRAPH_SIZE*(GRAPH_SIZE-1)  //���� �ִ� ����
#define MST_SIZE GRAPH_SIZE-1			//�ּ� ���� Ʈ�� ũ��
#define INF 9999						//���Ѵ� ���� ����

//����ġ�� �������� �������� ���� (���� ����)
void sortedge(int edgeinfo[][3], int edgeinfoindex) {
	int temp;
	for (int i = edgeinfoindex - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			//���� ���� ����ġ�� �� Ŭ ��� �հ� ���� ���� ���� ��ȯ
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

//find�Լ�, �ش� ����� root ��� ��ȯ
//root ��� : �ڱ� �ڽ��� ����Ű�� ���
int find(int union_find[], int index) {
	if (union_find[index] == index)
		return index;
	else
		return union_find[index] = find(union_find, union_find[index]);
}

//union�Լ�, �ڽ� ���� �θ� ��� ����
void unionfunc(int union_find[], int parent, int child) {
	parent = find(union_find, parent);
	child = find(union_find, child);
	union_find[child] = parent;
}

int main() {
	//��� �׷���
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };

	//���� ���� ���� ���� ���� {��� 1, ��� 2, ����ġ} ���� ����, 0���� �ʱ�ȭ
	int edgeinfo[EDGE_INFO_MAX_SIZE][3] = {};
	int edgeinfoindex = 0;				//���� ������ ����� ���� ����
	int MST_edge[MST_SIZE][3] = {};		//�ּ� ���� Ʈ�� ���� ����
	int MST_edgeindex = 0;				//�ּ� ���� Ʈ���� ����� ���� ����

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
	for (int i = 0; i < edgeinfoindex; i++) {
		//���� root ��尡 �ٸ��ٸ� �θ�, �ڽ� ���� �����ϰ� MST�� ���� ���� �߰�
		if (find(union_find, edgeinfo[i][0]) != find(union_find, edgeinfo[i][1])) {
			unionfunc(union_find, edgeinfo[i][0], edgeinfo[i][1]);
			printf("\n\nunion_find �迭 : ");
			for (int j = 0; j < GRAPH_SIZE; j++) {
				printf("%d ", union_find[j]);
			}
			MST_edge[MST_edgeindex][0] = edgeinfo[i][0];
			MST_edge[MST_edgeindex][1] = edgeinfo[i][1];
			MST_edge[MST_edgeindex][2] = edgeinfo[i][2];
			MST_edgeindex++;
			printf("\n�߰��� MST ���� : {%d, %d, %d}",edgeinfo[i][0],edgeinfo[i][1],edgeinfo[i][2]);
		}
		//���� root ��尡 ���ٸ� ����Ŭ �����Ǵ� ������ �Ǵ�
		else {
			printf("\n��� %d, ��� %d ����Ŭ �߻�", edgeinfo[i][0], edgeinfo[i][1]);
		}
	}
	int costsum = 0;		//��� �� ���� ����
	printf("\n\n���� �ּ� ���� Ʈ�� ���� ����\n");
	for (int i = 0; i < MST_edgeindex; i++) {
		printf("��� %d, ��� %d ����ġ : %d\n", MST_edge[i][0], MST_edge[i][1], MST_edge[i][2]);
		costsum += MST_edge[i][2];
	}
	printf("\n���� ��� : %d", costsum);
}