#include<stdio.h>
#define MAX_SIZE 100
#define GRAPH_SIZE 5

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
	q->front = q->rear = 0;
}

void initvisited(int visited[GRAPH_SIZE]) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
			visited[i] = 0;
	}
}

void push() {

}

void pop() {

}

void enqueue() {

}

void dequeue() {

}

void DFS(int graph[GRAPH_SIZE][GRAPH_SIZE],int node) {

}

void BFS(int graph[GRAPH_SIZE][GRAPH_SIZE], int node) {

}

int main() {
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,1,1,0,0},
		{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,0},{0,1,0,0,0} };
	int visited[GRAPH_SIZE];
	printgraph(graph);
	STACK Gstack;
	QUEUE Gqueue;
	initstack(&Gstack);
	initqueue(&Gqueue);
	initvisited(visited);
	DFS(graph, 0);
	BFS(graph, 0);
}