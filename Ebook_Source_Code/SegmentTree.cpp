
#include<stdio.h>
#define ARRAY_SIZE 7                 //�迭 ũ�� ����
#define SEGMENT_SIZE ARRAY_SIZE*4    //���ǻ� �迭ũ���� 4�踦 ����

int originarray[ARRAY_SIZE] = { 4,7,1,-3,10,-1,6 };  //���� ���� ���� �迭
int segmenttree[SEGMENT_SIZE];                       //���׸�Ʈ Ʈ�� ���� �迭
int segmentMaxIndex = 0;              //���׸�Ʈ Ʈ���� �ִ� �ε����� ���ϴ� ���� ����

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
	int segmentIndex = 1;       //���׸�Ʈ Ʈ���� ��Ʈ �ε���(��� ������ ���� �ε���) ����
	initSegment(0, ARRAY_SIZE-1, segmentIndex);
	
	printf("���׸�Ʈ Ʈ���� �ִ� �ε��� : %d\n", segmentMaxIndex);
	int firstindex, secondindex;
	printf("�迭�� ���� �� ù ��° ���� : ");
	scanf_s("%d", &firstindex);
	printf("�迭�� ���� �� �� ��° ���� : ");
	scanf_s("%d", &secondindex);
	if (firstindex > secondindex) {
		int temp = firstindex;
		firstindex = secondindex;
		secondindex = temp;
	}
	int answer = findsum(0, ARRAY_SIZE - 1, firstindex, secondindex, segmentIndex);
	printf("�ε��� %d���� %d������ �� : %d", firstindex, secondindex, answer);
	
}