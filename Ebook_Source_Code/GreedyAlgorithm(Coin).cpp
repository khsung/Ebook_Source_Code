
/*
#include<stdio.h>
#define COIN_NUM 4

int main() {
	//���� �ݾ�
	int coinValue[COIN_NUM] = { 500, 100, 50, 10 };
	int coinCount[COIN_NUM] = { 0 };			//������ ���� ����
	int cost;									//�����ؾ� �Ǵ� ���

	printf("���� �ݾ� : ");
	scanf_s("%d", &cost);

	for (int i = 0; i< COIN_NUM; i++) {
		//�ִ��� ���� ������ ���� ���� ���� ū �ݾ��� �������� ó��
		//�׸��� �˰����� �ٽɿ���
		while (coinValue[i] <= cost) {
			cost -= coinValue[i];
			coinCount[i]++;
		}
	}

	//�� ������ ���� ���
	for (int i = 0; i< COIN_NUM; i++) {
		printf("%d�� ������ ���� : %d\n", coinValue[i], coinCount[i]);
	}
}

*/