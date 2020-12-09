/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {  //Ʈ�� ����ü ����
	char data;
	struct TNODE* left;
	struct TNODE* right;
}TNODE;

TNODE* root;	 //��Ʈ��� ���庯��
TNODE* parent;   //�θ��� ���庯��

void init() {
	root = NULL;
	parent = NULL;
}

//�θ��忡�� ������ �ڽ� ��� �������
void delparentconnect(TNODE* child) {
	if (parent->right == child) {
		parent->right = NULL;
	}
	else {
		parent->left = NULL;
	}
}

void addnode(int data) {    //��� �߰�
	TNODE* curr;
	curr = root;    //���� ��ġ ���
	TNODE* node = (TNODE*)malloc(sizeof(TNODE));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	if (root == NULL) {
		root = node;
	}
	else {
		while (true) {

			//curr���� ũ�� ������
			if (curr->data < node->data) {
				//�ڽ� ������ �߰�
				if (curr->right == NULL) {
					curr->right = node;
					break;
				}
				//�ڽ� ���� �̵�
				else curr = curr->right;
			}
			//curr���� ������ ����
			else {
				//�ڽ� ������ �߰�
				if (curr->left == NULL) {
					curr->left = node;
					break;
				}
				//�ڽ� ���� �̵�
				else curr = curr->left;
			}
		}
	}
}

void deletenode(int data) {   //������
	TNODE* curr;
	TNODE* temp;
	curr = root;
	if (curr == NULL) {  //��Ʈ�� ������� ���
		printf("���� ���� Ʈ��\n");
	}
	else {
		while (true) {
			//���� ��� ������ ���ϴ� ���� �� Ŭ ��
			if (curr->data < data) {
				//���� ��� ������ �� ū ���� ���� ��
				if (curr->right == NULL) {
					printf("%d �� �ش��ϴ� ���� ����\n", data);
					break;
				}
				//���� ��带 �θ���� �����ϰ�
				//������ �ڽ����� �̵�
				else {
					parent = curr;
					curr = curr->right;
				}
			}
			//���� ��� ������ ���ϴ� ���� �� ���� ��
			else if (curr->data > data) {
				//���� ��� ������ �� ���� ���� ���� ��
				if (curr->left == NULL) {
					printf("%d �� �ش��ϴ� ���� ����\n",data);
					break;
				}
				//���� ��带 �θ���� �����ϰ�
				//���� �ڽ����� �̵�
				else {
					parent = curr;
					curr = curr->left;
				}
			}
			//���� ã���� ��
			else {
				//�ڽ� ��尡 ���� �� �θ���� ���� ����
				if (curr->left == NULL && curr->right == NULL) {
					delparentconnect(curr);
					free(curr);
					break;
				}
				//������ �ڽĸ� ���� �� ������ �ڽ����� �̵� ��
				//���� ���� ���� ���� ���� ����� ���� �ٲ� ��
				//���� ����� ���� �� ����� �θ� ���� ����
				//���ϴ� ���Ұ� ����ִ� �ٲ� ��� ����
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
				//���� �ڽ����� �̵� �� ���� ū ���� ����
				//���� ����� ���� �ٲ� �� ���� ����� ���� 
				//�� ����� �θ� ���� ����
				//���ϴ� ���Ұ� ����ִ� �ٲ� ��� ����
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

//���� ��ȸ root->left->right
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

//���� ��ȸ left->root->right
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

//���� ��ȸ left->right->root
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