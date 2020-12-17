
#include<stdio.h>

#define FIBONACCI_INDEX 10

//재귀 알고리즘
int RecursiveFibonacci(int num) {
	if (num == 1 || num == 0) {
		return num;
	}
	else {
		//재귀를 통해 매번 계산을 해야됨 = 숫자가 커지면 오버헤드
		return RecursiveFibonacci(num - 1) + RecursiveFibonacci(num - 2);
	}
}

//Dynamic Programming
int DP[FIBONACCI_INDEX] = { 0 };   //연산 결과값 저장배열(전역 변수 선언)
int DPFibonacci(int num) {
	if (num == 1 || num == 0) {
		DP[num] = num;
		return num;
	}

	//피보나치 수열은 첫번째 숫자를 제외하면 모두 양수이므로
	//DP[num] > 0일 경우 연산결과가 저장되어 있으므로
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
	printf("재귀형식 피보나치 수열의 %d번째 숫자 : %d\n", FIBONACCI_INDEX, 
		RecursiveFibonacci(FIBONACCI_INDEX - 1));
	printf("동적 계획법 피보나치 수열의 %d번째 숫자 : %d", FIBONACCI_INDEX,
		DPFibonacci(FIBONACCI_INDEX - 1));
}