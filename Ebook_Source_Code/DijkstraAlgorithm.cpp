/*
#include<stdio.h>
#define GRAPH_SIZE 5    //�׷��� ũ�� ����
#define INF 999         //���Ѵ� ��ü �������� ��Ȳ�� ���� ����
#define STARTNODE 0     //���۳�� ����

//�迭 ��� �Լ�
void printarray(int array[], int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	//�׷��� ��� ����
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0, 2, 8, 5, INF},
										  {2, 0, INF, 1, 9},
										  {8, INF, 0, 2, INF},
										  {5, 1, 2, 0, 4},
										  {INF, 9, INF, 4, 0} };
	//��� ���� �迭 ����
	int path[GRAPH_SIZE] = { 0 };
	//��� ���� �迭 ����
	int cost[GRAPH_SIZE] = { INF, INF, INF, INF, INF };

	//�湮�ߴ��� üũ�ϴ� �迭, �迭ũ�⸸ŭ false�� �ڵ� �ʱ�ȭ
	bool visited[GRAPH_SIZE] = {};
	int min, minindex;            //�ּҰ��� �ּҰ��� �ε��� ���� ����
	int startnode = STARTNODE;    //���� ��� ����
	cost[startnode] = 0;          //���� ��� ��� ����


	//�׷��� ���
	printf("�׷��� ���\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

	printf("\n�ʱ� ��� �迭 : ");
	printarray(cost, GRAPH_SIZE);

	//��� ������ŭ �ݺ�
	for (int i = 0; i < GRAPH_SIZE; i++) {
		//�湮�� ���� ����
		visited[startnode] = true;
		printf("\n���� ��� : %d\n", startnode);
		for (int j = 0; j < GRAPH_SIZE; j++) {
			//�湮���� ���� ��� �� ����� �� ���� ��� ��� �迭 ����
			if ((visited[j]==false)&&((cost[startnode]+graph[startnode][j])<cost[j])){
				cost[j] = cost[startnode] + graph[startnode][j];
				path[j] = startnode;
			}
		}

		printf("���ŵ� ��� �迭 : ");
		printarray(cost, GRAPH_SIZE);
		min = INF;

		//�湮���� ���� ��� �� �ּҰ��� �ּҰ��� �ε��� ���ϴ� �ݺ���
		for (int j = 0; j < GRAPH_SIZE; j++) {
			if (visited[j] == false && cost[j] < min) {
				min = cost[j];
				minindex = j;
			}
		}

		//min�� ���Ѵ��� ���� ��� ��带 �湮�ߴ� ��
		if (min != INF) {
			startnode = minindex;
		}
	}

	printf("\n��� �迭 : ");
	printarray(path, GRAPH_SIZE);
	printf("\n");
	startnode = STARTNODE;       //�ʱ� ���۳��� �ʱ�ȭ

	for (int i = 0; i < GRAPH_SIZE; i++) {
		printf("������ ��� : %d  �ּҺ�� ��� : ", i);
		printf("%d", i);

		//������ �ӽ�����
		int temp = i;
		while (temp != startnode) {
			//��� �迭�� ���� ���� �ε����� �ǹ�
			temp = path[temp];
			printf(" <- %d", temp);
		}
		printf("\n\n");
	}
}
*/