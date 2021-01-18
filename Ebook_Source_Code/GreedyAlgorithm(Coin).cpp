
/*
#include<stdio.h>
#define COIN_NUM 4

int main() {
	//동전 금액
	int coinValue[COIN_NUM] = { 500, 100, 50, 10 };
	int coinCount[COIN_NUM] = { 0 };			//지불할 동전 개수
	int cost;									//지불해야 되는 비용

	printf("지불 금액 : ");
	scanf_s("%d", &cost);

	for (int i = 0; i< COIN_NUM; i++) {
		//최대한 적은 개수를 내기 위해 가장 큰 금액의 동전부터 처리
		//그리디 알고리즘의 핵심원리
		while (coinValue[i] <= cost) {
			cost -= coinValue[i];
			coinCount[i]++;
		}
	}

	//각 동전의 개수 출력
	for (int i = 0; i< COIN_NUM; i++) {
		printf("%d원 동전의 개수 : %d\n", coinValue[i], coinCount[i]);
	}
}

*/