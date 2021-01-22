/*
#include<stdio.h>
#define FIBONACCI_INDEX 10		//20���� �����ؼ��� ����

int Recursivecount = 0;			//��� �˰��� ���� Ƚ��
int DPcount = 0;				//���� ���α׷��� ���� Ƚ��

//��� �˰���
int RecursiveFibonacci(int num) {
	Recursivecount++;
	if (num == 1 || num == 0) {
		return num;
	}
	else {
		//��͸� ���� �Ź� ����� �ؾߵ� = ���ڰ� Ŀ���� �������
		return RecursiveFibonacci(num - 1) + RecursiveFibonacci(num - 2);
	}
}

//���� ��ȹ�� (Dynamic Programming)
int DP[FIBONACCI_INDEX] = { 0 };   //���� ����� ����迭(���� ���� ����)
int DPFibonacci(int num) {
	DPcount++;
	if (num == 1 || num == 0) {
		DP[num] = num;
		return DP[num];
	}

	//�Ǻ���ġ ������ ù��° ���ڸ� �����ϸ� ��� ����̱� ������
	//DP[num] > 0�� ��� �������� ����Ǿ� �ִ� ���̹Ƿ�
	//�迭��(���� �����) ����
	else if (DP[num] > 0) {
		return DP[num];
	}

	//DP[num]�� ���� ������� ���� ���(0�� ��)
	//��͸� ���� ���갪 ���� �� ��� ����
	else {
		DP[num] = DPFibonacci(num - 1) + DPFibonacci(num - 2);
		return DP[num];
	}
}

int main() {
	//index�� 0���� �����ϱ� ������ FIBONACCI_INDEX - 1�� ����
	//1��° : 0, 2��° : 1, 3��° : 1, 4��° : 2
	printf("��� �˰��� �Ǻ���ġ ������ %d��° ���� : %d\n", 
				FIBONACCI_INDEX, RecursiveFibonacci(FIBONACCI_INDEX - 1));
	printf("��� �˰��� ���� Ƚ�� : %d\n\n", Recursivecount);
	printf("���� ��ȹ�� �Ǻ���ġ ������ %d��° ���� : %d\n", 
				FIBONACCI_INDEX, DPFibonacci(FIBONACCI_INDEX - 1));
	printf("���� ���α׷��� ���� Ƚ�� : %d\n", DPcount);
}

*/