
/*
#include<stdio.h>

int main() {
	int coinValue[4] = { 500,100,50,10 };  //���� �ݾ�
	int coinCount[4] = { 0 };              //������ ���� ����
	int cost;                              //�����ؾ� �Ǵ� ���

	printf("���� �ݾ� : ");
	scanf_s("%d", &cost);

	for (int i = 0; i<int(sizeof(coinValue) / sizeof(int)); i++) {
		//�ִ��� ���� ������ ���� ���� ���� ū �ݾ��� �������� ó��
		//�̰� �׸��� �˰����� �ٽ�
		while (coinValue[i] <= cost) {
			cost -= coinValue[i];
			coinCount[i]++;
		}
	}

	//�� ������ ���� ���
	for (int i = 0; i<int(sizeof(coinValue) / sizeof(int)); i++) {
		printf("%d�� ������ ���� : %d\n", coinValue[i], coinCount[i]);
	}
}
*/
