/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	//rand 함수는 난수생성처럼 보이지만
	//사실 프로그램이 실행될 때 일련의 숫자들이 정해진다
	//따라서 srand 함수를 통해 계속 현재시간을 
	//매개변수로 받아서 초기화 시키면
	//계속 변하는 난수 생성이 가능해진다.
	srand(time(NULL));
	//100으로 나눈 나머지에 1을 더하면
	//1부터 100까지 난수를 얻을 수 있다.
	int answer = (rand()%100)+1;
	int count=1;
	//찾을 때까지 반복, 브루트 포스 원리
	while (answer!=count) {
		printf("현재 숫자 : %d\n", count);
		count++;
	}
	printf("정답숫자 : %d", count);
}

*/