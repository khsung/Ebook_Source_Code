
#include<stdio.h>
#define ARRAY_SIZE 7                 //배열 크기 선언
#define SEGMENT_SIZE ARRAY_SIZE*4    //편의상 배열크기의 4배를 선언

int originarray[ARRAY_SIZE] = { 4,7,1,-3,10,-1,6 };  //구간 합을 구할 배열
int segmenttree[SEGMENT_SIZE];                       //세그먼트 트리 구현 배열
int segmentMaxIndex = 0;              //세그먼트 트리의 최대 인덱스를 구하는 변수 선언

int initSegment(int left, int right, int index) {
	if (left == right) {
		if (index > segmentMaxIndex)
			segmentMaxIndex = index;
		return segmenttree[index] = originarray[left];
	}
	else {
		int mid = (left + right) / 2;
		return segmenttree[index] = initSegment(left, mid, 2 * index) + initSegment(mid + 1, right, 2 * index + 1);
	}
}

int findsum(int left, int right, int first, int second, int index) {
	int mid = (left + right) / 2;
	if (left == first && right == second) {
		return segmenttree[index];
	}
	else if (second <= mid) {
		return findsum(left, mid, first, second, 2 * index);
	}
	else if (first > mid) {
		return findsum(mid + 1, right, first, second, 2 * index + 1);
	}
	else {
		return findsum(left, mid, first, mid, 2 * index) + findsum(mid + 1, right, mid + 1, second, 2 * index + 1);
	}
}

int main() {
	int segmentIndex = 1;       //세그먼트 트리의 루트 인덱스(모든 원소의 합인 인덱스) 선언
	initSegment(0, ARRAY_SIZE-1, segmentIndex);
	
	printf("세그먼트 트리의 최대 인덱스 : %d\n", segmentMaxIndex);
	int firstindex, secondindex;
	printf("배열의 구간 합 첫 번째 범위 : ");
	scanf_s("%d", &firstindex);
	printf("배열의 구간 합 두 번째 범위 : ");
	scanf_s("%d", &secondindex);
	if (firstindex > secondindex) {
		int temp = firstindex;
		firstindex = secondindex;
		secondindex = temp;
	}
	int answer = findsum(0, ARRAY_SIZE - 1, firstindex, secondindex, segmentIndex);
	printf("인덱스 %d부터 %d까지의 합 : %d", firstindex, secondindex, answer);
	
}