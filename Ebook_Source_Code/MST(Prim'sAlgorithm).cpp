
/*
#include<stdio.h>
#define INF 9999			//���Ѵ� ���� ����
#define GRAPH_SIZE 5		//�׷��� ��� ����
#define START_NODE 0		//���� ���

int main() {
	//�׷��� ����
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,2,8,5,INF},
										  {2,0,INF,1,9},
										  {8,INF,0,2,INF},
										  {5,1,2,0,4},
										  {INF,9,INF,4,0} };

	//�ּ� ���� Ʈ�� ���� ���� ����, {���, ���, ����ġ}
	int MST[GRAPH_SIZE - 1][3] = {};
	int MSTindex = 0;
	//�湮�� ������� üũ
	bool visited[GRAPH_SIZE] = { false };
	//�ּ� ��� ���� ���� ����
	int min, firstnode, secondnode;
	int startnode = START_NODE;

	printf("MST ���� �߰� ����\n");
	//������ ���� �׳� �߰��� �ϸ� �ǹǷ� N-1���� ��带
	//�湮�� ������ �ݺ�
	for (int i = 0; i < GRAPH_SIZE - 1; i++) {
		//�湮�� ���� ����
		visited[startnode] = true;
		min = INF;

		//��ü ��� Ž��
		for (int j = 0; j < GRAPH_SIZE; j++) {
			//�湮�� ���� �湮���� ���� ��� ������ ���� ��
			//�ּ� ��� ���� ���� Ž��
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
		//���� ���� ����
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

	//��� �� ���� ����
	int costsum = 0;
	printf("\n���� MST ���� ����\n");
	for (int j = 0; j < MSTindex; j++) {
		printf("��� %d ��� %d ����ġ : %d\n",MST[j][0],MST[j][1],MST[j][2]);
		costsum += MST[j][2];
	}
	printf("\n���� ��� : %d\n", costsum);
}
*/