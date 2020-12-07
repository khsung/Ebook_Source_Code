
#include<stdio.h>
#define MAX_HEAP_SIZE 100

typedef struct {
	int currheapsize;
	int heap[MAX_HEAP_SIZE];
}MAXHEAP;

void init(MAXHEAP* h) {
	h->currheapsize = 0;
}

int isempty(MAXHEAP* h) {
	if (h->currheapsize == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(MAXHEAP* h) {
	if (h->currheapsize == MAX_HEAP_SIZE-1) {
		return 1;
	}
	else {
		return 0;
	}
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void addheap(MAXHEAP* h, int data) {
	if (isfull(h)) {
		printf("포화 힙\n");
	}
	else {
		h->currheapsize++;
		int currindex = h->currheapsize;
		h->heap[currindex] = data;
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

void deleteheap(MAXHEAP* h) {
	if (isempty(h)) {
		printf("공백 힙\n");
	}
	else {
		if (h->currheapsize == 1) {
			h->currheapsize--;
		}
		else {
			int curr = 1;
			h->heap[curr] = h->heap[h->currheapsize];
			h->currheapsize--;

			//현재 힙의 크기까지만 반복가능
			while (2 * curr + 1 <= h->currheapsize) {

				//왼쪽 자식만 있을 때
				if (2 * curr == h->currheapsize) {
					if (h->heap[curr] <= h->heap[2 * curr]) {
						swap(&h->heap[curr], &h->heap[2 * curr]);
						curr = 2 * curr;
					}
					else {
						break;
					}
				}
				else {

					//오른쪽 자식이 클 때
					if (h->heap[2 * curr] < h->heap[2 * curr + 1]) {
						if (h->heap[curr] <= h->heap[2 * curr + 1]) {
							swap(&h->heap[curr], &h->heap[2 * curr + 1]);
							curr = 2 * curr + 1;
						}
						else {
							break;
						}
					}

					//왼쪽 자식이 더 크거나 같을 때
					else {
						if (h->heap[curr] <= h->heap[2 * curr]) {
							swap(&h->heap[curr], &h->heap[2 * curr]);
							curr = 2 * curr;
						}
						else {
							break;
						}
					}
				}
			}
		}
	}
}

void printheap(MAXHEAP* h) {
	int line = 2;
	for (int i = 1; i <= h->currheapsize; i++) {
		printf("%d  ", h->heap[i]);
		if (i == line - 1) {
			printf("\n");
			line = 2 * line;
		}
	}
	printf("\n");
}

int main() {
	MAXHEAP heap;
	init(&heap);
	for (int i = 0; i < 10; i++) {
		addheap(&heap, i);
	}
	//printheap(&heap);
	/*addheap(&heap, 5);
	addheap(&heap, 4);
	addheap(&heap, 6);
	printheap(&heap);
	addheap(&heap, 8);
	addheap(&heap, 10);
	addheap(&heap, 9);*/
	//addheap(&heap, 4);
	printheap(&heap);
}