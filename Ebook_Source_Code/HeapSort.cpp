
#include<stdio.h>

#define MAX_HEAP_SIZE 100

typedef struct {
	int data;
}HEAPDATA;

typedef struct {
	int currheapsize;
	HEAPDATA heap[MAX_HEAP_SIZE];
}HEAP;

void init(HEAP* h) {
	h->currheapsize = 0;
}

int isempty(HEAP* h) {
	if (h->currheapsize == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int isfull(HEAP* h) {
	if (h->currheapsize == MAX_HEAP_SIZE-1) {
		return 1;
	}
	else {
		return 0;
	}
}



int main() {
	HEAP heap;
	init(&heap);

}