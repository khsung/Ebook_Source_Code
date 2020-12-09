/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {  //트리 구조체 선언
	char data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

TNODE* root;	 //루트노드 저장변수
TNODE* parent;   //부모노드 저장변수

void init() {
	root = NULL;
	parent = NULL;
}

//부모노드에서 삭제할 자식 노드 연결끊기
void delparentconnect(TNODE* child) {
	if (parent->right == child) {
		parent->right = NULL;
	}
	else {
		parent->left = NULL;
	}
}

void addnode(int data) {    //노드 추가
	TNODE* curr;
	curr = root;    //현재 위치 노드
	TNODE* node = (TNODE*)malloc(sizeof(TNODE));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	if (root == NULL) {
		root = node;
	}
	else {
		while (true) {

			//curr보다 크면 오른쪽
			if (curr->data < node->data) {
				//자식 없으면 추가
				if (curr->right == NULL) {
					curr->right = node;
					break;
				}
				//자식 노드로 이동
				else curr = curr->right;
			}
			//curr보다 작으면 왼쪽
			else {
				//자식 없으면 추가
				if (curr->left == NULL) {
					curr->left = node;
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
			//현재 노드 값보다 원하는 값이 더 클 때
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
			//현재 노드 값보다 원하는 값이 더 작을 때
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
				//자식 노드가 없을 때 부모노드와 연결 해제
				if (curr->left == NULL && curr->right == NULL) {
					delparentconnect(curr);
					free(curr);
					break;
				}
				//오른쪽 자식만 있을 때 오른쪽 자식으로 이동 후
				//제일 작은 값의 노드와 원래 노드의 값을 바꾼 후
				//원래 노드의 값이 들어간 노드의 부모 연결 해제
				//원하는 원소가 들어있는 바꾼 노드 해제
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
				//왼쪽 자식으로 이동 후 제일 큰 값의 노드와
				//원래 노드의 값을 바꾼 후 원래 노드의 값이 
				//들어간 노드의 부모 연결 해제
				//원하는 원소가 들어있는 바꾼 노드 해제
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
	if (node == NULL) {
		return;
	}
	else {
		printf("%d ", node->data);
		preorder(node->left);
		preorder(node->right);
	}
}

//중위 순회 left->root->right
void inorder(TNODE* node) {
	if (node == NULL) {
		return;
	}
	else {
		inorder(node->left);
		printf("%d ", node->data);
		inorder(node->right);
	}
}

//후위 순회 left->right->root
void postorder(TNODE* node) {
	if (node == NULL) {
		return;
	}
	else {
		postorder(node->left);
		postorder(node->right);
		printf("%d ", node->data);
	}
}

int main() {
	init();
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