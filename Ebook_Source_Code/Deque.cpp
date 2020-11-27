#include <stdio.h>
#include <malloc.h>

typedef struct {              //데크 구조체 선언
	int data;
	struct NODE* prev;
	struct NODE* next;
}NODE;

typedef struct {              //데크 구조체 선언
	NODE* front;
	NODE* rear;
}DEQUE;

void init(DEQUE* d) {           //큐 초기화
	NODE* Front = (NODE*)malloc(sizeof(NODE));
	NODE* Rear = (NODE*)malloc(sizeof(NODE));
	Front->data = NULL;
	Front->next = Front->prev = NULL;
	Rear->data = NULL;
	Rear->next = Rear->prev = NULL;
	d->front = Front;
	d->rear = Rear;
	d->front->next = d->rear->prev;
	d->rear->prev = d->front;
}


int isempty(DEQUE* f, DEQUE* r) {       //큐 공백상태 체크
	if (f->next == r)
		return 1;
	else
		return 0;
}

int main() {
	DEQUE* head = (DEQUE*)malloc(sizeof(DEQUE));
	head->data = NULL;
	head->next = NULL;
}

int main() {
	DEQUE* front = (DEQUE*)malloc(sizeof(DEQUE));
	DEQUE* rear = (DEQUE*)malloc(sizeof(DEQUE));
	init(front);
	init(rear);
	front->next = rear;
}

//#include <stdio.h>
//#include <malloc.h>
//
//typedef struct listNode listPointer;
//typedef struct listNode {
//	int data;
//	listPointer* link;
//};
//listPointer* concatenate(listPointer* ptr1, listPointer* ptr2) {
//    listPointer* temp;
//    if (!ptr1)
//        return ptr2;
//    if (!ptr2)
//        return ptr1;
//    for (temp = ptr1; temp->link; temp = temp->link); // temp를 ptr1의 끝으로 이동
//    temp->link = ptr2; //ptr2를 연결함
//    return ptr1;
//}