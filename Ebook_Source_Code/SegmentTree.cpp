/*
#include<stdio.h>
#define ARRAY_SIZE 7				  //�迭 ũ�� ����
#define SEGMENT_SIZE 4*ARRAY_SIZE	  //���׸�Ʈ Ʈ�� ũ��,���ǻ� �迭ũ���� 4�踦 ����

int originarray[ARRAY_SIZE] = { 4,7,1,-3,10,-1,6 };  //���� ���� ���� �迭
int segmenttree[SEGMENT_SIZE];                       //���׸�Ʈ Ʈ�� ���� �迭
int segmentMaxIndex = 0;              //���׸�Ʈ Ʈ���� �ִ� �ε����� ���ϴ� ���� ����

void swap(int* a, int* b) {			  //�� ���� ��ȯ
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���׸�Ʈ Ʈ�� �ʱ�ȭ
int initSegment(int left, int right, int treeindex) {
	//left�� right�� ���� ���� �� ���� �ε����� ���� �ϴ� ��带 ����
	if (left == right) {
		//���׸�Ʈ Ʈ���� �ִ� �ε��� ����
		if (treeindex > segmentMaxIndex)
			segmentMaxIndex = treeindex;
		return segmenttree[treeindex] = originarray[left];
	}
	//�ΰ� �̻��� �ε����� �����ϴ� ���
	else {
		int mid = (left + right) / 2;
		//���� �ڽĳ��� ������ �ڽĳ���� ���� ����
		return segmenttree[treeindex] = initSegment(left, mid, 2 * treeindex) +
						initSegment(mid + 1, right, 2 * treeindex + 1);
	}
}

//���� ���� ���ϴ� �Լ�
//left : ���׸�Ʈ Ʈ�� ������ ���� �ε���, right : ���׸�Ʈ Ʈ�� ������ ������ �ε���
//first : ���� ���� ���� �ε���, second : ���� ���� ������ �ε���
int findsum(int left, int right, int first, int second, int treeindex) {
	int mid = (left + right) / 2;
	//���� ����� ������ ���
	if (left == first && right == second) {
		return segmenttree[treeindex];
	}
	//���� �ڽĿ��� ���� �� ���
	else if (second <= mid) {
		return findsum(left, mid, first, second, 2 * treeindex);
	}
	//������ �ڽĿ��� ���� �� ���
	else if (first > mid) {
		return findsum(mid + 1, right, first, second, 2 * treeindex + 1);
	}
	//���� �ڽİ� ������ �ڽ� �� �ٿ� ���ԵǴ� ������ ���
	else {
		//���� �ڽİ� ������ �ڽ����� ������ ��ȯ�Ǵ� ���� ����
		return findsum(left, mid, first, mid, 2 * treeindex) +
					findsum(mid + 1, right, mid + 1, second, 2 * treeindex + 1);
	}
}

//�迭�� ���Ұ� �ٲ��� �� ���׸�Ʈ Ʈ�� ����
int updatesegment(int left, int right, int treeindex, int arrayindex, int diff) {
	int mid = (left + right) / 2;
	//���� ��尡 ����� �迭�� �ε��� �ϳ��� �����ϴ� ���
	if (left == right && left == arrayindex) {
		return segmenttree[treeindex] += diff;
	}
	else {
		segmenttree[treeindex] += diff;
		//����� �迭�� �ε����� ���� �ڽĿ� ���Ե� ���
		if (arrayindex <= mid)
			return updatesegment(left, mid, 2 * treeindex, arrayindex, diff);
		//����� �迭�� �ε����� ������ �ڽĿ� ���Ե� ���
		else
			return updatesegment(mid + 1, right, 2 * treeindex + 1, arrayindex, diff);
	}
}

//������ �Է¹ް� ������ �ش��ϴ� ���� �� ����ϴ� �Լ�
void printsum(int segmentIndex) {
	int firstindex, secondindex;
	printf("\n�迭�� ���� �� ù ��° ���� : ");
	scanf_s("%d", &firstindex);
	printf("�迭�� ���� �� �� ��° ���� : ");
	scanf_s("%d", &secondindex);

	//���� ���� ���ʿ� ������ ��ȯ
	if (firstindex > secondindex)
		swap(&firstindex, &secondindex);

	int answer = findsum(0, ARRAY_SIZE - 1, firstindex, secondindex, segmentIndex);
	printf("�ε��� %d���� �ε��� %d������ �� : %d\n", firstindex, secondindex, answer);
}

int main() {
	int segmentindex = 1;   //���׸�Ʈ Ʈ���� ��Ʈ �ε���(��� ������ ���� �ε���) ����
	initSegment(0, ARRAY_SIZE-1, segmentindex);
	printf("���׸�Ʈ Ʈ���� �ִ� �ε��� : %d\n", segmentMaxIndex);

	printsum(segmentindex);
	
	//changevalueindex : �迭�� ���� ������ ��ġ, originvalue : ���� �迭�� ��,
	//difference : ���� �迭�� ���� ������ ���� ����
	int changevalueindex, originvalue, difference;
	printf("\n�迭���� ���� �� �ε��� ��ġ(0~%d) : ", ARRAY_SIZE - 1);
	scanf_s("%d", &changevalueindex);
	originvalue = originarray[changevalueindex];
	printf("������ �� : ");
	scanf_s("%d", &originarray[changevalueindex]);

	//���� ���� ���� �� ���� ����
	difference = originarray[changevalueindex]- originvalue;
	updatesegment(0, ARRAY_SIZE - 1, segmentindex, changevalueindex, difference);

	printsum(segmentindex);
}
*/