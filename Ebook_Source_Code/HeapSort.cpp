
/*
#include<stdio.h>
#define ARRAY_SIZE 7			//���� �� �迭�� ũ��
#define MAX_HEAP_SIZE 100		//�� �ִ� ũ��

typedef struct {				//�ִ� �� ����ü ����
	int currheapsize;
	int heap[MAX_HEAP_SIZE];
}MAXHEAP;

void init(MAXHEAP* h) {			//�� �ʱ�ȭ
	h->currheapsize = 0;
}

int isempty(MAXHEAP* h) {		//���� ������ �� 1(true) ��ȯ
	if (h->currheapsize == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(MAXHEAP* h) {		//��ȭ ������ �� 1(true) ��ȯ
	if (h->currheapsize == MAX_HEAP_SIZE - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

void swap(int* a, int* b) {				//�� ��ȯ
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void addheap(MAXHEAP* h, int data) {     //���� �� �߰�
	if (isfull(h)) {
		printf("��ȭ ��\n");
	}
	else {
		h->currheapsize++;
		//���� �ε���, ���� �� ������ �ε������� ����
		int currindex = h->currheapsize;
		h->heap[currindex] = data;    //������ �ε����� �� �߰�

		//�ִ� �� ���� ����, �θ� ������ �ڽ� ���� ũ�� ���� ��ȯ
		while (currindex != 1) {
			if (h->heap[currindex] > h->heap[currindex / 2]) {
				swap(&h->heap[currindex], &h->heap[currindex / 2]);
				currindex = currindex / 2;
			}
			else {
				break;
			}
		}
	}
}

int deleteheap(MAXHEAP* h) {      //�ִ� �� ���� ����
	//���� ���� �� 0(false�� ����) ��ȯ
	if (isempty(h)) {
		return 0;
	}
	//���� ���� �ƴ� ��
	else {
		int curr = 1;
		if (h->currheapsize == 1) {    //���Ұ����� �� ���� ��
			h->currheapsize--;         //������·� ��ȯ
			return h->heap[curr];
		}
		else {
			//��Ʈ ��� Ű�� ���� ����
			int value = h->heap[curr];
			//������ ������ ���� ��Ʈ ���� �̵��ϰ� �� ���� ����
			h->heap[curr] = h->heap[h->currheapsize];
			h->currheapsize--;
			//���� ���� ũ������� Ž���ϵ��� ����
			while (2 * curr <= h->currheapsize) {
				//���� �ڽĸ� ���� ��
				if (2 * curr == h->currheapsize) {
					//�ڽ� ���� �� ũ�� �θ�� �ڽ��� ���� ��ȯ
					if (h->heap[curr] < h->heap[2 * curr]) {
						swap(&h->heap[curr], &h->heap[2 * curr]);
						curr = 2 * curr;
					}
					else {
						break;
					}
				}

				//���� ������ �� �� ���� ��
				else {
					//������ �ڽ��� Ŭ ��
					if (h->heap[2 * curr] < h->heap[2 * curr + 1]) {
						//�ڽ� ���� �� ũ�� �θ�� �ڽ��� ���� ��ȯ
						if (h->heap[curr] < h->heap[2 * curr + 1]) {
							swap(&h->heap[curr], &h->heap[2 * curr + 1]);
							curr = 2 * curr + 1;
						}
						else {
							break;
						}
					}

					//���� �ڽ��� �� ũ�ų� ���� ��
					else {
						//�ڽ� ���� �� ũ�� �θ�� �ڽ��� ���� ��ȯ
						if (h->heap[curr] < h->heap[2 * curr]) {
							swap(&h->heap[curr], &h->heap[2 * curr]);
							curr = 2 * curr;
						}
						else {
							break;
						}
					}
				}
			}
			return value;
		}
	}
}

//�� ��� �Լ�
void printheap(MAXHEAP* h) {
	if (h->currheapsize == 0) {
		printf("���� ��");
	}
	else {
		printf("�� ����\n");
		int line = 2;		//Ʈ���� ���� ������ ����ϱ����� ����
		for (int i = 1; i <= h->currheapsize; i++) {
			printf("%d  ", h->heap[i]);
			if (i == line - 1) {
				printf("\n");
				line = 2 * line;
			}
		}
	}
	printf("\n\n");
}

int main() {
	int array[ARRAY_SIZE] = { 6,3,5,7,9,1,6 };
	MAXHEAP heap;
	init(&heap);

	//���� �� �迭 ����ϸ鼭 ���� ���� ����
	printf("���� �� �迭 : ");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", array[i]);
		addheap(&heap, array[i]);
	}

	//���� ���� �����ϸ鼭 ���� ���
	//�ִ� ���̱� ������ �ڵ� ������������ ����
	printf("\n\n�� ���� �� �迭 : ");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", deleteheap(&heap));
	}
}
*/