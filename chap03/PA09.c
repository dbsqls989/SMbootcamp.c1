/*
* ���ϸ�: PA09.c
* ����: ���Ը� �Ŀ��� �Է¹޾� ų�α׷����� ��ȯ�ؼ� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-09
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ldtokg();

int main(void)
{
	ldtokg();
	return 0;
}

void ldtokg()
{
	int ld = 0;
	double kg = 0;

	printf("����(ld)? ");
	scanf("%d", &ld);

	kg = ld * 0.45359237;
	printf("%d ld = %lf kg", ld, kg);
}