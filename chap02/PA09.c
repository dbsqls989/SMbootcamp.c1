/*
* ���ϸ�: PA09.c
* ����: 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷� �ۼ�.
* �ۼ���: ������
* ��¥: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertnum();

int main(void)
{
	convertnum();
	return 0;
}

void convertnum()
{
	int num = 0;

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %x�� 10���� %d �Դϴ�.", num, num);
}