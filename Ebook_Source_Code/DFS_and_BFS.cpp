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

void pushStack() {

}

int main() {
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,1,1,0,0},
		{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,0},{0,1,0,0,0} };
	printgraph(graph);
	STACK Gstack;
	initstack(&Gstack);
	//printf("%d", Gstack.top);
	//printf("%d", sizeof(Gstack.stack));
	//for(int i=0;i<siz)
	printf("%d", Gstack.stack[0]);
}