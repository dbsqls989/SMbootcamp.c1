/*
* ���ϸ�: PA11.c
* ����: ��/�޷� ȯ���� ��ȭ�� �Է¹޾� �� �޷����� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_wontoDollar();

int main(void)
{
	get_wontoDollar();
	return 0;
}

void get_wontoDollar()
{
	int won = 0;
	double dollar, result = 0;

	printf("KRW? ");
	scanf("%d", &won);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &dollar);

	result = won / dollar;
	printf("KRW %d = USD %.2lf", won, result);
}