
#include<stdio.h>
#define ARRAY_SIZE 7                 //�迭 ũ�� ����
#define SEGMENT_SIZE ARRAY_SIZE*4    //���ǻ� �迭ũ���� 4�踦 ����

int originarray[ARRAY_SIZE] = { 4,7,1,-3,10,-1,6 };
int segmenttree[SEGMENT_SIZE];

//mid�� �����ؾߵǴ��� �ٽû���
int initSegment(int left, int right, int mid, int index, int maxindex) {
	if()
	return 0;
}

int main() {
	int segmentIndex = 1;       //���׸�Ʈ Ʈ���� ��Ʈ �ε���(��� ������ ��) ����
	int segmentMaxIndex = 0;    //���׸�Ʈ Ʈ���� �ִ� �ε����� ���ϴ� ���� ����
	initSegment(0, ARRAY_SIZE-1, (ARRAY_SIZE-1) / 2, segmentIndex, segmentMaxIndex);

}