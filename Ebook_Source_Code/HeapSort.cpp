#include<stdio.h>
#define MAX_HEAP_SIZE 100  //�� �ִ� ũ��

typedef struct {        //�ִ� �� ����ü ����
	int currheapsize;
	int heap[MAX_HEAP_SIZE];
}MAXHEAP;

void init(MAXHEAP* h) {   //�� �ʱ�ȭ
	h->currheapsize = 0;
}

int isempty(MAXHEAP* h) {   //���� ������ �� true ��ȯ
	if (h->currheapsize == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(MAXHEAP* h) {      //��ȭ ������ �� true ��ȯ
	if (h->currheapsize == MAX_HEAP_SIZE - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

void swap(int* a, int* b) {     //�� ��ȯ
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
	if (isempty(h)) {
		printf("���� ��\n");
	}
	else {
		if (h->currheapsize == 1) {    //���Ұ����� �� ���� ��
			h->currheapsize--;         //������·� ��ȯ
		}
		else {
			int curr = 1;
			int maxvalue;              //������ �ִ� ��
			maxvalue = h->heap[curr];
			h->heap[curr] = h->heap[h->currheapsize];
			h->currheapsize--;

			//���� ���� ũ������� Ž���ϵ��� ����
			while (2 * curr + 1 <= h->currheapsize) {

				//���� �ڽĸ� ���� ��
				if (2 * curr == h->currheapsize) {
					if (h->heap[curr] <= h->heap[2 * curr]) {
						swap(&h->heap[curr], &h->heap[2 * curr]);
						curr = 2 * curr;
					}
					else {
						return maxvalue;
					}
				}

				//���� ������ �� �� ���� ��
				else {

					//������ �ڽ��� Ŭ ��
					if (h->heap[2 * curr] < h->heap[2 * curr + 1]) {
						if (h->heap[curr] <= h->heap[2 * curr + 1]) {
							swap(&h->heap[curr], &h->heap[2 * curr + 1]);
							curr = 2 * curr + 1;
						}
						else {
							return maxvalue;
						}
					}

					//���� �ڽ��� �� ũ�ų� ���� ��
					else {
						if (h->heap[curr] <= h->heap[2 * curr]) {
							swap(&h->heap[curr], &h->heap[2 * curr]);
							curr = 2 * curr;
						}
						else {
							return maxvalue;
						}
					}
				}
			}
		}
	}
}

void printheap(MAXHEAP* h) {
	if (h->currheapsize == 0) {
		printf("���� ��\n");
	}
	else {
		printf("%d   ",deleteheap(h));
	}
	//printf("\n");
}

int main() {
	MAXHEAP heap;
	init(&heap);
	addheap(&heap, 6);
	addheap(&heap, 3);
	addheap(&heap, 5);
	addheap(&heap, 7);
	addheap(&heap, 9);
	addheap(&heap, 1);
	addheap(&heap, 6);
	printheap(&heap);
}