/*
* ���ϸ�: PA02.c
* ����: ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ftoc();
double get_temperature(double f);

int main(void)
{
	input_ftoc();
	return 0;
}

void input_ftoc()
{
	double f = 0;

	printf("ȭ�� �µ�? ");
	scanf("%lf", &f);

	double result = get_temperature(f);

	printf("%.2lf F = %.2lf C", f, result);
}

double get_temperature(double f)
{
	double c;

	c = (f - 32) * 5.0 / 9.0;

	return c;
}