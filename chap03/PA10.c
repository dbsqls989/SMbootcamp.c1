/*
* ���ϸ�: PA10.c
* ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_dollarToWon();

int main(void)
{
	get_dollarToWon();
	return 0;
}

void get_dollarToWon()
{
	double USD, won, result = 0;

	printf("USD? ");
	scanf("%lf", &USD);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &won);
	
	result = USD * won;
	printf("USD %.2lf = KRW %.2lf",USD, result);
}