
/*
#include<stdio.h>

int main() {
	int coinValue[4] = { 500,100,50,10 };  //동전 금액
	int coinCount[4] = { 0 };              //지불할 동전 개수
	int cost;                              //지불해야 되는 비용

	printf("지불 금액 : ");
	scanf_s("%d", &cost);

	for (int i = 0; i<int(sizeof(coinValue) / sizeof(int)); i++) {
		//최대한 적은 개수를 내기 위해 가장 큰 금액의 동전부터 처리
		//이게 그리디 알고리즘의 핵심
		while (coinValue[i] <= cost) {
			cost -= coinValue[i];
			coinCount[i]++;
		}
	}

	//각 동전의 개수 출력
	for (int i = 0; i<int(sizeof(coinValue) / sizeof(int)); i++) {
		printf("%d원 동전의 개수 : %d\n", coinValue[i], coinCount[i]);
	}
}
*/
