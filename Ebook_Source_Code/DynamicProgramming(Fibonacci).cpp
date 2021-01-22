/*
#include<stdio.h>
#define FIBONACCI_INDEX 10		//20으로 변경해서도 실행

int Recursivecount = 0;			//재귀 알고리즘 연산 횟수
int DPcount = 0;				//동적 프로그래밍 연산 횟수

//재귀 알고리즘
int RecursiveFibonacci(int num) {
	Recursivecount++;
	if (num == 1 || num == 0) {
		return num;
	}
	else {
		//재귀를 통해 매번 계산을 해야됨 = 숫자가 커지면 오버헤드
		return RecursiveFibonacci(num - 1) + RecursiveFibonacci(num - 2);
	}
}

//동적 계획법 (Dynamic Programming)
int DP[FIBONACCI_INDEX] = { 0 };   //연산 결과값 저장배열(전역 변수 선언)
int DPFibonacci(int num) {
	DPcount++;
	if (num == 1 || num == 0) {
		DP[num] = num;
		return DP[num];
	}

	//피보나치 수열은 첫번째 숫자를 제외하면 모두 양수이기 때문에
	//DP[num] > 0일 경우 연산결과가 저장되어 있단 뜻이므로
	//배열값(연산 결과값) 리턴
	else if (DP[num] > 0) {
		return DP[num];
	}

	//DP[num]에 연산 결과값이 없을 경우(0일 때)
	//재귀를 통해 연산값 저장 후 결과 리턴
	else {
		DP[num] = DPFibonacci(num - 1) + DPFibonacci(num - 2);
		return DP[num];
	}
}

int main() {
	//index는 0부터 시작하기 때문에 FIBONACCI_INDEX - 1을 넣음
	//1번째 : 0, 2번째 : 1, 3번째 : 1, 4번째 : 2
	printf("재귀 알고리즘 피보나치 수열의 %d번째 숫자 : %d\n", 
				FIBONACCI_INDEX, RecursiveFibonacci(FIBONACCI_INDEX - 1));
	printf("재귀 알고리즘 연산 횟수 : %d\n\n", Recursivecount);
	printf("동적 계획법 피보나치 수열의 %d번째 숫자 : %d\n", 
				FIBONACCI_INDEX, DPFibonacci(FIBONACCI_INDEX - 1));
	printf("동적 프로그래밍 연산 횟수 : %d\n", DPcount);
}

*/