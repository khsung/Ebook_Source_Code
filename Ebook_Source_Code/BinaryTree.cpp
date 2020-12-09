/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {  //Ʈ�� ����ü ����
	char data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

TNODE* root;
TNODE* parent;   //�θ��� ���庯��

void init() {
	root = NULL;
	parent = NULL;
}

//�θ��忡�� ������ �ڽ� ��� �������
void parentconnection(TNODE* child) {
	if (parent->right == child) {
		parent->right = NULL;
	}
	else {
		parent->left = NULL;
	}
}

void addnode(int data) {    //��� �߰�
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

void deletenode(int data) {   //������
	TNODE* curr;
	TNODE* temp;
	curr = root;
	if (curr == NULL) {
		printf("���� ���� Ʈ��\n");
	}
	else {
		while (true) {
			if (curr->data < data) {
				if (curr->right == NULL) {
					printf("%d �� �ش��ϴ� ���� ����\n", data);
					break;
				}
				else {
					parent = curr;
					curr = curr->right;
				}
			}
			else if (curr->data > data) {
				if (curr->left == NULL) {
					printf("%d �� �ش��ϴ� ���� ����\n",data);
					break;
				}
				else {
					parent = curr;
					curr = curr->left;
				}
			}
			//���� ã���� ��
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
	printf("���� ��ȸ : ");
	preorder(root);
	printf("\n���� ��ȸ : ");
	inorder(root);
	printf("\n���� ��ȸ : ");
	postorder(root);
	printf("\n");
}
*/