/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {		//트리 구조체 선언
	char data;
	struct TNODE* left;		//왼쪽 자식 노드
	struct TNODE* right;	//오른쪽 자식 노드
}TNODE;

TNODE* root;				//루트노드 저장변수
TNODE* parent;				//부모노드 저장변수

void init() {				//초기화
	root = NULL;
	parent = NULL;
}

//부모노드에서 삭제할 자식 노드 연결끊기
void delparentconnect(TNODE* child) {
	if (parent->right == child) {
		parent->right = NULL;
	}
	else if(parent->left == child){
		parent->left = NULL;
	}
}

//추가 노드 생성 시 초기화
void initnode(TNODE* node, int data) {
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}

void addnode(int data) {	//노드 추가
	TNODE* curr;			//현재 위치 변수 선언
	curr = root;
	TNODE* newnode = (TNODE*)malloc(sizeof(TNODE));
	initnode(newnode, data);
	if (curr == NULL) {		//루트 노드가 공백 상태면 루트에 추가
		root = newnode;
	}
	else {
		while (true) {
			//curr보다 크면 오른쪽
			if (curr->data < newnode->data) {
				//자식 없으면 추가
				if (curr->right == NULL) {
					curr->right = newnode;
					break;
				}
				//자식 노드로 이동
				else curr = curr->right;
			}
			//curr보다 작으면 왼쪽
			else {
				//자식 없으면 추가
				if (curr->left == NULL) {
					curr->left = newnode;
					break;
				}
				//자식 노드로 이동
				else curr = curr->left;
			}
		}
	}
}

void deletenode(int data) {   //노드삭제
	TNODE* curr;
	TNODE* temp;
	curr = root;
	if (curr == NULL) {  //루트가 비어있을 경우
		printf("공백 이진 트리\n");
	}
	else {
		while (true) {
			//현재 노드 값보다 지울 값이 더 클 때
			if (curr->data < data) {
				//현재 노드 값보다 더 큰 값이 없을 때
				if (curr->right == NULL) {
					printf("%d 에 해당하는 원소 없음\n", data);
					break;
				}
				//현재 노드를 부모노드로 저장하고
				//오른쪽 자식으로 이동
				else {
					parent = curr;
					curr = curr->right;
				}
			}
			//현재 노드 값보다 지울 값이 더 작을 때
			else if (curr->data > data) {
				//현재 노드 값보다 더 작은 값이 없을 때
				if (curr->left == NULL) {
					printf("%d 에 해당하는 원소 없음\n",data);
					break;
				}
				//현재 노드를 부모노드로 저장하고
				//왼쪽 자식으로 이동
				else {
					parent = curr;
					curr = curr->left;
				}
			}
			//원소 찾았을 때
			else {
				//자식 노드가 없을 때
				if (curr->left == NULL && curr->right == NULL) {
					//루트 노드일 때 NULL로 초기화
					if (curr->data == root->data) {
						free(curr);
						root = NULL;
						break;
					}
					//부모노드와 연결 해제
					else {
						delparentconnect(curr);
						free(curr);
						break;
					}
				}
				//오른쪽 자식만 있을 때 지울 노드를 임시 저장한 뒤
				//오른쪽 자식으로 이동 후 왼쪽 자식 노드가 없을
				//때까지 왼쪽 자식 노드로 이동하면 지울 노드의
				//키 값보다 큰 값 중 가장 작은 값을 구할 수 있다
				//해당 값을 원래 지울 노드의 키 값으로 저장하고
				//해제하면 트리 구조를 유지할 수 있다
				else if (curr->left == NULL) {
					parent = temp = curr;
					curr = curr->right;
					while (curr->left != NULL) {
						parent = curr;
						curr = curr->left;
					}
					temp->data = curr->data;
					delparentconnect(curr);
					free(curr);
					break;
				}
				//지울 노드를 임시 저장한 뒤 왼쪽 자식으로 
				//이동 후 오른쪽 자식 노드가 없을 때까지 
				//오른쪽 자식 노드로 이동하면 지울 노드의
				//키 값보다 작은 값 중 가장 큰 값을 구할 수 있다
				//해당 값을 원래 지울 노드의 키 값으로 저장하고
				//해제하면 트리 구조를 유지할 수 있다
				else {
					parent = temp = curr;
					curr = curr->left;
					while (curr->right != NULL) {
						parent = curr;
						curr = curr->right;
					}
					temp->data = curr->data;
					delparentconnect(curr);
					free(curr);
					break;
				}
			}
		}
	}
}

//전위 순회 root->left->right
void preorder(TNODE* node) {
	if (root == NULL) {
		printf("공백 이진 트리\n");
	}
	else {
		if (node == NULL) {
			return;
		}
		else {
			printf("%d ", node->data);		//root 출력
			preorder(node->left);			//left 이동
			preorder(node->right);			//right 이동
		}
	}
}

//중위 순회 left->root->right
void inorder(TNODE* node) {
	if (root == NULL) {
		printf("공백 이진 트리\n");
	}
	else {
		if (node == NULL) {
			return;
		}
		else {
			inorder(node->left);			//left 이동
			printf("%d ", node->data);		//root 출력
			inorder(node->right);			//right 이동
		}
	}
}

//후위 순회 left->right->root
void postorder(TNODE* node) {
	if (root == NULL) {
		printf("공백 이진 트리\n");
	}
	else {
		if (node == NULL) {
			return;
		}
		else {
			postorder(node->left);			//left 이동
			postorder(node->right);			//right 이동
			printf("%d ", node->data);		//root 출력
		}
	}
}

int main() {
	init();
	addnode(1);
	deletenode(2);
	deletenode(1);
	inorder(root);
	addnode(3);
	addnode(1);
	addnode(5);
	addnode(0);
	addnode(2);
	addnode(4);
	addnode(6);
	printf("전위 순회 : ");
	preorder(root);
	printf("\n중위 순회 : ");
	inorder(root);
	printf("\n후위 순회 : ");
	postorder(root);
	printf("\n");
}
*/