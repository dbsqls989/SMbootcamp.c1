/*
* ���ϸ�: PA05.c
* ����: ���̸� ��ġ�� �Է¹޾� ��Ƽ���ͷ� ��ȯ�ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double inchtocm(void);

int main(void)
{
	inchtocm();
	return 0;
}
double inchtocm(void)
{
	double inch = 0, cm = 0;
	printf("����(inch)? ");
	scanf("%lf", &inch);

	cm = inch * 2.54;

	printf("%lf inch = %lf cm", inch, cm);
}
