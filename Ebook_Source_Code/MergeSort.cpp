/*
#include<stdio.h>
#define ARRAY_SIZE 5

void printarray(int array[], int size) { //배열 출력 함수
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

//나눠진 배열을 정렬하면서 합치는 함수
void merge(int array[], int left, int mid, int right) {
	int l = left, tempindex = left, m = mid;
	//임시저장 하기 위한 배열 선언
	int temp[ARRAY_SIZE] = { 0 };

	//left~mid, mid+1~right 이렇게 인덱스로 구분 지은
	//두 배열을 작은값부터 임시배열에 저장
	while (l <= mid && m+1<=right) {
		if (array[l] < array[m + 1]) {
			temp[tempindex] = array[l];
			tempindex++;
			l++;
		}
		else {
			temp[tempindex] = array[m + 1];
			tempindex++;
			m++;
		}
	}

	//한가지 배열을 다 임시저장 배열에 넣었을 때
	//나머지 배열은 임시배열보다 더 큰값들로
	//오름차순 정렬되어 있으므로 임시배열에
	//넣지 못한 원소들을 차례로 넣어줌
	//m + 1 > right이면 오른쪽 배열은 다 넣고
	//왼쪽 배열만 남았다는 뜻
	if (m + 1 > right) {
		while (l <= mid) {
			temp[tempindex] = array[l];
			tempindex++;
			l++;
		}
	}
	//왼쪽 배열은 다 넣고 오른쪽 배열만 남음
	else {
		while (m + 1 <= right) {
			temp[tempindex] = array[m + 1];
			tempindex++;
			m++;
		}
	}

	//임시저장 배열을 원래 배열에 복사해줌
	for (int i = left; i <= right; i++) {
		array[i] = temp[i];
	}
	printf("temp 배열 : ");
	printarray(temp, ARRAY_SIZE);
	printf("원래 배열 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n");
}

//배열 사이즈가 1이 될 때까지 인덱스를 나눠줌
void mergesort(int array[], int left, int right) {
	int mid;
	//left == right일 경우 사이즈가 1이다
	if (left < right) {
		//c에서는 int형의 나눗셈의 경우
		//내림을 함 (Ex. 3/2==1)
		mid = (left + right) / 2;

		//왼쪽 배열
		mergesort(array, left, mid);
		//오른쪽 배열
		mergesort(array, mid + 1, right);
		//반으로 나눴던 배열을 정렬하면서 합침
		merge(array, left, mid, right);
	}
}

int main() {
	int array[ARRAY_SIZE] = { 5,4,2,3,1 };
	printf("정렬 전 배열 : ");
	printarray(array, ARRAY_SIZE);
	printf("\n====== 정렬 과정 ======\n");
	mergesort(array, 0, ARRAY_SIZE - 1);
	printf("정렬 된 배열 : ");
	printarray(array, ARRAY_SIZE);
}
*/