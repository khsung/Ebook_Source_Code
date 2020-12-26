#include<stdio.h>
#define MAX_SIZE 100
#define GRAPH_SIZE 5
#define START_NODE 0

typedef struct STACK {
	int top;
	int stack[MAX_SIZE];
}STACK;

typedef struct QUEUE {
	int front, rear;
	int queue[MAX_SIZE];
}QUEUE;

void printgraph(int graph[GRAPH_SIZE][GRAPH_SIZE]) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
}

void initstack(STACK* s) {
	s->top = -1;
}

void initqueue(QUEUE* q) {
	q->front = 0;
	q->rear = -1;
}

void initvisited(bool visited[GRAPH_SIZE]) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
			visited[i] = false;
	}
}

void push(STACK* s, int node) {
	if (s->top == MAX_SIZE - 1) {
		printf("포화 스택\n");
	}
	else {
		s->stack[++s->top]=node;
	}
}

//DFS에서 공백상태가 아닌 경우만 pop을 호출하기 때문에 공백상태 체크는 구현안함
int pop(STACK* s) {
	int popdata = s->stack[s->top--];
	return popdata;
}

void enqueue(QUEUE* q, int node) {
	if (q->rear == MAX_SIZE - 1) {
		printf("포화 큐\n");
	}
	else {
		q->queue[++q->rear] = node;
	}
}

//BFS에서 공백상태가 아닌 경우만 dequeue를 호출하기 때문에 공백상태 체크는 구현안함
int dequeue(QUEUE* q) {
	int dequeuedata = q->queue[q->front++];
	return dequeuedata;
}

void DFS(int graph[GRAPH_SIZE][GRAPH_SIZE], bool visited[GRAPH_SIZE],int node, STACK* s) {
	int printnode;
	printf("DFS 순서 : ");
	if (node == START_NODE) {
		push(s, node);
		visited[node] = true;
	}
	while (s->top > -1) {
		printnode = pop(s);
		printf("%d ", printnode);
		for (int i = 0; i < GRAPH_SIZE; i++) {
			if (graph[printnode][i] == 1 && visited[i] == false) {
				push(s, i);
				visited[i] = true;
			}
		}
	}
	printf("\n");
}

void BFS(int graph[GRAPH_SIZE][GRAPH_SIZE], bool visited[GRAPH_SIZE], int node, QUEUE* q) {
	int printnode;
	printf("BFS 순서 : ");
	if (node == START_NODE) {
		enqueue(q, node);
		visited[node] = true;
	}
	while (q->front <=q->rear) {
		printnode = dequeue(q);
		printf("%d ", printnode);
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
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,1,1,0,0},
		{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,0},{0,1,0,0,0} };
	bool visited[GRAPH_SIZE];
	//printgraph(graph);
	STACK Gstack;
	QUEUE Gqueue;
	initstack(&Gstack);
	initqueue(&Gqueue);
	initvisited(visited);
	DFS(graph, visited, START_NODE, &Gstack);
	initvisited(visited);
	BFS(graph, visited, START_NODE, &Gqueue);
}