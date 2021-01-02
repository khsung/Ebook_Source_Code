
#include<stdio.h>
#define ARRAY_SIZE 7                 //배열 크기 선언
#define SEGMENT_SIZE ARRAY_SIZE*4    //편의상 배열크기의 4배를 선언

int originarray[ARRAY_SIZE] = { 4,7,1,-3,10,-1,6 };
int segmenttree[SEGMENT_SIZE];

//mid를 선언해야되는지 다시생각
int initSegment(int left, int right, int mid, int index, int maxindex) {
	if()
	return 0;
}

int main() {
	int segmentIndex = 1;       //세그먼트 트리의 루트 인덱스(모든 원소의 합) 선언
	int segmentMaxIndex = 0;    //세그먼트 트리의 최대 인덱스를 구하는 변수 선언
	initSegment(0, ARRAY_SIZE-1, (ARRAY_SIZE-1) / 2, segmentIndex, segmentMaxIndex);

}