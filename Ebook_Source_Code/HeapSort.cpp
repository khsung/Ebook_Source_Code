/*
#include<stdio.h>
#define MAX_HEAP_SIZE 100  //힙 최대 크기

typedef struct {        //최대 힙 구조체 정의
	int currheapsize;
	int heap[MAX_HEAP_SIZE];
}MAXHEAP;

void init(MAXHEAP* h) {   //힙 초기화
	h->currheapsize = 0;
}

int isempty(MAXHEAP* h) {   //공백 상태일 때 true 반환
	if (h->currheapsize == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(MAXHEAP* h) {      //포화 상태일 때 true 반환
	if (h->currheapsize == MAX_HEAP_SIZE - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

int heapsize(MAXHEAP* h) {
	return h->currheapsize;
}

void swap(int* a, int* b) {     //값 교환
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void addheap(MAXHEAP* h, int data) {     //원소 값 추가
	if (isfull(h)) {
		printf("포화 힙\n");
	}
	else {
		h->currheapsize++;
		int currindex = h->currheapsize;
		h->heap[currindex] = data;    //마지막 인덱스에 값 추가

		//최대 힙 정렬 과정, 부모 값보다 자식 값이 크면 서로 교환
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

void deleteheap(MAXHEAP* h) {      //최대 값 원소 제거
	if (isempty(h)) {
		printf("공백 힙\n");
	}
	else {
		if (h->currheapsize == 1) {    //원소개수가 한 개일 때
			h->currheapsize--;         //공백상태로 전환
		}
		else {
			int curr = 1;
			int maxvalue;              //원소의 최대 값
			maxvalue = h->heap[curr];
			//printf("%d  ", maxvalue);
			h->heap[curr] = h->heap[h->currheapsize];
			h->currheapsize--;

			//현재 힙의 크기까지만 탐색하도록 제한
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

				//왼쪽 오른쪽 둘 다 있을 때
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
	if (h->currheapsize == 0) {
		printf("공백 힙\n");
	}
	else {
		int line = 2;
		for (int i = 1; i <= h->currheapsize; i++) {
			printf("%d  ", h->heap[i]);
			if (i == line - 1) {
				printf("\n");
				line = 2 * line;
			}
		}
	}
	printf("\n");
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
	deleteheap(&heap);
	printheap(&heap);
	deleteheap(&heap);
	printheap(&heap);
	deleteheap(&heap);
	printheap(&heap);
	deleteheap(&heap);
	printheap(&heap);
	deleteheap(&heap);
	printheap(&heap);
	deleteheap(&heap);
	printheap(&heap);
}
*/