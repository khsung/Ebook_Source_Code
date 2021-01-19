/*
#include<stdio.h>
#define MAX_SIZE 100				//�����̳� ť�� �ִ� ũ��
#define GRAPH_SIZE 5				//�׷��� ũ��
#define START_NODE 0				//�׷����� ���� ���

typedef struct STACK {				//���� ����ü ����
	int top;
	int stack[MAX_SIZE];
}STACK;

typedef struct QUEUE {				//ť ����ü ����
	int front, rear;
	int queue[MAX_SIZE];
}QUEUE;

//�׷��� ���
void printgraph(int graph[GRAPH_SIZE][GRAPH_SIZE]) {
	printf("�׷��� ���\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void initstack(STACK* s) {			//���� �ʱ�ȭ
	s->top = -1;
}

void initqueue(QUEUE* q) {			//ť �ʱ�ȭ
	q->front = 0;
	q->rear = -1;
}

//�湮�� ������� üũ�ϴ� �迭 �ʱ�ȭ
void initvisited(bool visited[GRAPH_SIZE]) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
			visited[i] = false;
	}
}

//���ÿ� ���� ��� �߰�
void push(STACK* s, int node) {
	if (s->top == MAX_SIZE - 1) {
		printf("��ȭ ����\n");
	}
	else {
		s->stack[++s->top]=node;
	}
}

//DFS���� ������°� �ƴ� ��츸 pop�� ȣ���ϱ� ������ ������� üũ�� ��������
int pop(STACK* s) {
	int popdata = s->stack[s->top--];
	return popdata;
}

//ť�� ���� ��� �߰�
void enqueue(QUEUE* q, int node) {
	if (q->rear == MAX_SIZE - 1) {
		printf("��ȭ ť\n");
	}
	else {
		q->queue[++q->rear] = node;
	}
}

//BFS���� ������°� �ƴ� ��츸 dequeue�� ȣ���ϱ� ������ ������� üũ�� ��������
int dequeue(QUEUE* q) {
	int dequeuedata = q->queue[q->front++];
	return dequeuedata;
}

//���� �켱 Ž��
void DFS(STACK* s, int graph[GRAPH_SIZE][GRAPH_SIZE], bool visited[GRAPH_SIZE],int node) {
	int printnode;
	printf("DFS ���� : ");
	//���� ����� �� ���ÿ� ����
	if (node == START_NODE) {
		push(s, node);
		visited[node] = true;
	}

	//������ ������°� �� ������
	while (s->top > -1) {
		//���ÿ��� ���� ��� ���
		printnode = pop(s);
		printf("%d ", printnode);
		//���ÿ��� ���� ���� ������ ��带 �湮 ������ ��� ���ÿ� ����
		for (int i = 0; i < GRAPH_SIZE; i++) {
			if (graph[printnode][i] == 1 && visited[i] == false) {
				push(s, i);
				visited[i] = true;
			}
		}
	}
	printf("\n");
}

//�ʺ� �켱 Ž��
void BFS(QUEUE* q, int graph[GRAPH_SIZE][GRAPH_SIZE], bool visited[GRAPH_SIZE], int node) {
	int printnode;
	printf("\nBFS ���� : ");
	//���� ����� �� ť�� ����
	if (node == START_NODE) {
		enqueue(q, node);
		visited[node] = true;
	}

	//ť�� ������°� �� ������
	while (q->front <= q->rear) {
		//ť���� ���� ��� ���
		printnode = dequeue(q);
		printf("%d ", printnode);
		//ť���� ���� ���� ������ ��带 �湮 ������ ��� ť�� ���� 
		for (int i = 0; i < GRAPH_SIZE; i++) {
			if (graph[printnode][i] == 1 && visited[i] == false) {
				enqueue(q, i);
				visited[i] = true;
			}
		}
	}
	printf("\n");
}

int main() {
	//�׷��� ���
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,1,1,0,0},
										  {1,0,0,1,1},
										  {1,0,0,1,0},
										  {0,1,1,0,0},
										  {0,1,0,0,0} };
	bool visited[GRAPH_SIZE];    //�湮�� ������� üũ�ϴ� �迭, true�� �湮�� ���
	printgraph(graph);
	STACK Gstack;
	QUEUE Gqueue;
	initstack(&Gstack);
	initqueue(&Gqueue);
	initvisited(visited);
	DFS(&Gstack, graph, visited, START_NODE);
	initvisited(visited);
	BFS(&Gqueue, graph, visited, START_NODE);
}
*/