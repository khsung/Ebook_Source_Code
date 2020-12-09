/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {  //트리 구조체 선언
	char data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

TNODE* root;
TNODE* parent;   //부모노드 저장변수

void init() {
	root = NULL;
	parent = NULL;
}

//부모노드에서 삭제할 자식 노드 연결끊기
void parentconnection(TNODE* child) {
	if (parent->right == child) {
		parent->right = NULL;
	}
	else {
		parent->left = NULL;
	}
}

void addnode(int data) {    //노드 추가
	TNODE* curr;
	curr = root;
	TNODE* node = (TNODE*)malloc(sizeof(TNODE));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	if (root == NULL) {
		root = node;
	}
	else {
		while (true) {
			if (curr->data < node->data) {
				if (curr->right == NULL) {
					curr->right = node;
					break;
				}
				else {
					curr = curr->right;
				}
			}
			else {
				if (curr->left == NULL) {
					curr->left = node;
					break;
				}
				else {
					curr = curr->left;
				}
			}
		}
	}
}

void deletenode(int data) {   //노드삭제
	TNODE* curr;
	TNODE* temp;
	curr = root;
	if (curr == NULL) {
		printf("공백 이진 트리\n");
	}
	else {
		while (true) {
			if (curr->data < data) {
				if (curr->right == NULL) {
					printf("%d 에 해당하는 원소 없음\n", data);
					break;
				}
				else {
					parent = curr;
					curr = curr->right;
				}
			}
			else if (curr->data > data) {
				if (curr->left == NULL) {
					printf("%d 에 해당하는 원소 없음\n",data);
					break;
				}
				else {
					parent = curr;
					curr = curr->left;
				}
			}
			//원소 찾았을 때
			else {
				if (curr->left == NULL && curr->right == NULL) {
					parentconnection(curr);
					free(curr);
					break;
				}
				else if (curr->left == NULL) {
					parentconnection(curr);
					temp = curr;
					curr = curr->right;
					while (curr->left != NULL) {
						curr = curr->left;
					}
					temp->data = curr->data;
					free(curr);
					break;
				}
				else {
					parentconnection(curr);
					temp = curr;
					curr = curr->left;
					while (curr->right != NULL) {
						curr = curr->right;
					}
					temp->data = curr->data;
					free(curr);
					break;
				}
			}
		}
	}
}

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