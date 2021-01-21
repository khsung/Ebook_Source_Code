/*
#include<stdio.h>
#define ARRAY_SIZE 7				  //배열 크기 선언
#define SEGMENT_SIZE 4*ARRAY_SIZE	  //세그먼트 트리 크기,편의상 배열크기의 4배를 선언

int originarray[ARRAY_SIZE] = { 4,7,1,-3,10,-1,6 };  //구간 합을 구할 배열
int segmenttree[SEGMENT_SIZE];                       //세그먼트 트리 구현 배열
int segmentMaxIndex = 0;              //세그먼트 트리의 최대 인덱스를 구하는 변수 선언

void swap(int* a, int* b) {			  //두 숫자 교환
	int temp = *a;
	*a = *b;
	*b = temp;
}

//세그먼트 트리 초기화
int initSegment(int left, int right, int treeindex) {
	//left와 right가 같단 뜻은 한 개의 인덱스를 포함 하는 노드를 뜻함
	if (left == right) {
		//세그먼트 트리의 최대 인덱스 갱신
		if (treeindex > segmentMaxIndex)
			segmentMaxIndex = treeindex;
		return segmenttree[treeindex] = originarray[left];
	}
	//두개 이상의 인덱스를 포함하는 노드
	else {
		int mid = (left + right) / 2;
		//왼쪽 자식노드와 오른쪽 자식노드의 값을 더함
		return segmenttree[treeindex] = initSegment(left, mid, 2 * treeindex) +
						initSegment(mid + 1, right, 2 * treeindex + 1);
	}
}

//범위 합을 구하는 함수
//left : 세그먼트 트리 구간의 왼쪽 인덱스, right : 세그먼트 트리 구간의 오른쪽 인덱스
//first : 구간 합의 왼쪽 인덱스, second : 구간 합의 오른쪽 인덱스
int findsum(int left, int right, int first, int second, int treeindex) {
	int mid = (left + right) / 2;
	//현재 노드의 구간일 경우
	if (left == first && right == second) {
		return segmenttree[treeindex];
	}
	//왼쪽 자식에만 포함 될 경우
	else if (second <= mid) {
		return findsum(left, mid, first, second, 2 * treeindex);
	}
	//오른쪽 자식에만 포함 될 경우
	else if (first > mid) {
		return findsum(mid + 1, right, first, second, 2 * treeindex + 1);
	}
	//왼쪽 자식과 오른쪽 자식 둘 다에 포함되는 범위일 경우
	else {
		//왼쪽 자식과 오른쪽 자식으로 나누어 반환되는 값을 더함
		return findsum(left, mid, first, mid, 2 * treeindex) +
					findsum(mid + 1, right, mid + 1, second, 2 * treeindex + 1);
	}
}

//배열의 원소가 바꼈을 때 세그먼트 트리 갱신
int updatesegment(int left, int right, int treeindex, int arrayindex, int diff) {
	int mid = (left + right) / 2;
	//현재 노드가 변경된 배열의 인덱스 하나만 포함하는 경우
	if (left == right && left == arrayindex) {
		return segmenttree[treeindex] += diff;
	}
	else {
		segmenttree[treeindex] += diff;
		//변경된 배열의 인덱스가 왼쪽 자식에 포함될 경우
		if (arrayindex <= mid)
			return updatesegment(left, mid, 2 * treeindex, arrayindex, diff);
		//변경된 배열의 인덱스가 오른쪽 자식에 포함될 경우
		else
			return updatesegment(mid + 1, right, 2 * treeindex + 1, arrayindex, diff);
	}
}

//범위를 입력받고 범위에 해당하는 값의 합 출력하는 함수
void printsum(int segmentIndex) {
	int firstindex, secondindex;
	printf("\n배열의 구간 합 첫 번째 범위 : ");
	scanf_s("%d", &firstindex);
	printf("배열의 구간 합 두 번째 범위 : ");
	scanf_s("%d", &secondindex);

	//작은 값이 왼쪽에 오도록 교환
	if (firstindex > secondindex)
		swap(&firstindex, &secondindex);

	int answer = findsum(0, ARRAY_SIZE - 1, firstindex, secondindex, segmentIndex);
	printf("인덱스 %d부터 인덱스 %d까지의 합 : %d\n", firstindex, secondindex, answer);
}

int main() {
	int segmentindex = 1;   //세그먼트 트리의 루트 인덱스(모든 원소의 합인 인덱스) 선언
	initSegment(0, ARRAY_SIZE-1, segmentindex);
	printf("세그먼트 트리의 최대 인덱스 : %d\n", segmentMaxIndex);

	printsum(segmentindex);
	
	//changevalueindex : 배열의 값을 변경할 위치, originvalue : 원래 배열의 값,
	//difference : 원래 배열의 값과 갱신한 값의 차이
	int changevalueindex, originvalue, difference;
	printf("\n배열값을 변경 할 인덱스 위치(0~%d) : ", ARRAY_SIZE - 1);
	scanf_s("%d", &changevalueindex);
	originvalue = originarray[changevalueindex];
	printf("변경할 값 : ");
	scanf_s("%d", &originarray[changevalueindex]);

	//원래 값과 변경 된 값의 차이
	difference = originarray[changevalueindex]- originvalue;
	updatesegment(0, ARRAY_SIZE - 1, segmentindex, changevalueindex, difference);

	printsum(segmentindex);
}
*/