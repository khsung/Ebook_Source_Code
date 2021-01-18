/*
//트리 방문 백트래킹 예제
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {			//트리 노드 구조체 선언
	char data;
	int visited;				//방문한 노드인지 체크하는 변수
	struct TNODE* Lchild;		//왼쪽 자식
	struct TNODE* Rchild;		//오른쪽 자식
}TNODE;

//원하는 원소를 찾기 위해 왼쪽 자식노드부터 탐색
//재귀알고리즘으로 구현한 깊이 우선 탐색
void BacktrackingFindAnswer(TNODE root, TNODE node, char answer) {
	printf("현재 노드의 데이터 : %c\n", node.data);
	if (node.data == answer) {
		printf("데이터 %c 찾음\n", answer);
		return;
	}
	else {
		//루트 노드에서 탐색 가능한 왼쪽 자식부터 탐색
		if (node.Lchild != NULL && node.Lchild -> visited == 0) {
			BacktrackingFindAnswer(root, *node.Lchild, answer);
		}
		//탐색 가능한 왼쪽 자식노드가 없을 경우 오른쪽 자식 탐색
		if (node.Rchild != NULL && node.Rchild -> visited == 0) {
			BacktrackingFindAnswer(root, *node.Rchild, answer);
		}
		//탐색가능한 자식노드가 없을 경우 방문완료이므로
		//visited 1로 변경
		node.visited = 1;
	}
}

int main() {
	//백트래킹을 위한 예제이므로
	//단순한 트리 구조 생성
	//먼저 노드를 선언해줘야 연결 가능하므로 
	//가장 끝 자식노드부터 선언
	TNODE Dnode = { 'D', 0, NULL, NULL };     //        A
	TNODE Cnode = { 'C', 0, NULL, NULL };     //      B
	TNODE Bnode = { 'B', 0, &Cnode, &Dnode }; //    C   D  
	TNODE Anode = { 'A', 0, &Bnode, NULL };
	char answer = 'D';
	BacktrackingFindAnswer(Anode, Anode, answer);
}

*/