/*
#include<stdio.h>
#include<stdlib.h>

typedef struct TNODE {		//Ʈ�� ����ü ����
	char data;
	struct TNODE* left;		//���� �ڽ� ���
	struct TNODE* right;	//������ �ڽ� ���
}TNODE;

TNODE* root;				//��Ʈ��� ���庯��
TNODE* parent;				//�θ��� ���庯��

void init() {				//�ʱ�ȭ
	root = NULL;
	parent = NULL;
}

//�θ��忡�� ������ �ڽ� ��� �������
void delparentconnect(TNODE* child) {
	if (parent->right == child) {
		parent->right = NULL;
	}
	else if(parent->left == child){
		parent->left = NULL;
	}
}

//�߰� ��� ���� �� �ʱ�ȭ
void initnode(TNODE* node, int data) {
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}

void addnode(int data) {	//��� �߰�
	TNODE* curr;			//���� ��ġ ���� ����
	curr = root;
	TNODE* newnode = (TNODE*)malloc(sizeof(TNODE));
	initnode(newnode, data);
	if (curr == NULL) {		//��Ʈ ��尡 ���� ���¸� ��Ʈ�� �߰�
		root = newnode;
	}
	else {
		while (true) {
			//curr���� ũ�� ������
			if (curr->data < newnode->data) {
				//�ڽ� ������ �߰�
				if (curr->right == NULL) {
					curr->right = newnode;
					break;
				}
				//�ڽ� ���� �̵�
				else curr = curr->right;
			}
			//curr���� ������ ����
			else {
				//�ڽ� ������ �߰�
				if (curr->left == NULL) {
					curr->left = newnode;
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
			//���� ��� ������ ���� ���� �� Ŭ ��
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
			//���� ��� ������ ���� ���� �� ���� ��
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
				//�ڽ� ��尡 ���� ��
				if (curr->left == NULL && curr->right == NULL) {
					//��Ʈ ����� �� NULL�� �ʱ�ȭ
					if (curr->data == root->data) {
						free(curr);
						root = NULL;
						break;
					}
					//�θ���� ���� ����
					else {
						delparentconnect(curr);
						free(curr);
						break;
					}
				}
				//������ �ڽĸ� ���� �� ���� ��带 �ӽ� ������ ��
				//������ �ڽ����� �̵� �� ���� �ڽ� ��尡 ����
				//������ ���� �ڽ� ���� �̵��ϸ� ���� �����
				//Ű ������ ū �� �� ���� ���� ���� ���� �� �ִ�
				//�ش� ���� ���� ���� ����� Ű ������ �����ϰ�
				//�����ϸ� Ʈ�� ������ ������ �� �ִ�
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
				//���� ��带 �ӽ� ������ �� ���� �ڽ����� 
				//�̵� �� ������ �ڽ� ��尡 ���� ������ 
				//������ �ڽ� ���� �̵��ϸ� ���� �����
				//Ű ������ ���� �� �� ���� ū ���� ���� �� �ִ�
				//�ش� ���� ���� ���� ����� Ű ������ �����ϰ�
				//�����ϸ� Ʈ�� ������ ������ �� �ִ�
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
	if (root == NULL) {
		printf("���� ���� Ʈ��\n");
	}
	else {
		if (node == NULL) {
			return;
		}
		else {
			printf("%d ", node->data);		//root ���
			preorder(node->left);			//left �̵�
			preorder(node->right);			//right �̵�
		}
	}
}

//���� ��ȸ left->root->right
void inorder(TNODE* node) {
	if (root == NULL) {
		printf("���� ���� Ʈ��\n");
	}
	else {
		if (node == NULL) {
			return;
		}
		else {
			inorder(node->left);			//left �̵�
			printf("%d ", node->data);		//root ���
			inorder(node->right);			//right �̵�
		}
	}
}

//���� ��ȸ left->right->root
void postorder(TNODE* node) {
	if (root == NULL) {
		printf("���� ���� Ʈ��\n");
	}
	else {
		if (node == NULL) {
			return;
		}
		else {
			postorder(node->left);			//left �̵�
			postorder(node->right);			//right �̵�
			printf("%d ", node->data);		//root ���
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
	printf("���� ��ȸ : ");
	preorder(root);
	printf("\n���� ��ȸ : ");
	inorder(root);
	printf("\n���� ��ȸ : ");
	postorder(root);
	printf("\n");
}
*/