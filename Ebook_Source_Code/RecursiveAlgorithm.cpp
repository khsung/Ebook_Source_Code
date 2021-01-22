/*
#include<stdio.h>

int recursive(int num) {
	//종료 조건
	if (num == 0) {
		printf("sum 종료\n");
		return num;
	}
	else {
		printf("num : %d\n",num);
		return num + recursive(num - 1);
	}
}

int main() {
	int num = 5;
	printf("총 합 : %d",recursive(num));
}
*/