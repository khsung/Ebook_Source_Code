/*
#include<stdio.h>
#define MAX_SIZE 100				//스택이나 큐의 최대 크기
#define GRAPH_SIZE 5				//그래프 크기
#define START_NODE 0				//그래프의 시작 노드

typedef struct STACK {				//스택 구조체 선언
	int top;
	int stack[MAX_SIZE];
}STACK;

typedef struct QUEUE {				//큐 구조체 선언
	int front, rear;
	int queue[MAX_SIZE];
}QUEUE;

//그래프 출력
void printgraph(int graph[GRAPH_SIZE][GRAPH_SIZE]) {
	printf("그래프 행렬\n");
	for (int i = 0; i < GRAPH_SIZE; i++) {
		for (int j = 0; j < GRAPH_SIZE; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void initstack(STACK* s) {			//스택 초기화
	s->top = -1;
}

void initqueue(QUEUE* q) {			//큐 초기화
	q->front = 0;
	q->rear = -1;
}

//방문한 노드인지 체크하는 배열 초기화
void initvisited(bool visited[GRAPH_SIZE]) {
	for (int i = 0; i < GRAPH_SIZE; i++) {
			visited[i] = false;
	}
}

//스택에 인접 노드 추가
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

//큐에 인접 노드 추가
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

//깊이 우선 탐색
void DFS(STACK* s, int graph[GRAPH_SIZE][GRAPH_SIZE], bool visited[GRAPH_SIZE],int node) {
	int printnode;
	printf("DFS 순서 : ");
	//시작 노드일 때 스택에 저장
	if (node == START_NODE) {
		push(s, node);
		visited[node] = true;
	}

	//스택이 공백상태가 될 때까지
	while (s->top > -1) {
		//스택에서 꺼낸 노드 출력
		printnode = pop(s);
		printf("%d ", printnode);
		//스택에서 꺼낸 노드와 인접한 노드를 방문 안했을 경우 스택에 저장
		for (int i = 0; i < GRAPH_SIZE; i++) {
			if (graph[printnode][i] == 1 && visited[i] == false) {
				push(s, i);
				visited[i] = true;
			}
		}
	}
	printf("\n");
}

//너비 우선 탐색
void BFS(QUEUE* q, int graph[GRAPH_SIZE][GRAPH_SIZE], bool visited[GRAPH_SIZE], int node) {
	int printnode;
	printf("\nBFS 순서 : ");
	//시작 노드일 때 큐에 저장
	if (node == START_NODE) {
		enqueue(q, node);
		visited[node] = true;
	}

	//큐가 공백상태가 될 때까지
	while (q->front <= q->rear) {
		//큐에서 꺼낸 노드 출력
		printnode = dequeue(q);
		printf("%d ", printnode);
		//큐에서 꺼낸 노드와 인접한 노드를 방문 안했을 경우 큐에 저장 
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
	//그래프 행렬
	int graph[GRAPH_SIZE][GRAPH_SIZE] = { {0,1,1,0,0},
										  {1,0,0,1,1},
										  {1,0,0,1,0},
										  {0,1,1,0,0},
										  {0,1,0,0,0} };
	bool visited[GRAPH_SIZE];    //방문한 노드인지 체크하는 배열, true는 방문한 노드
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