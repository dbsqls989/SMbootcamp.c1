/*
* ���ϸ�: PA05.c
* ����: �����Ը� �Է¹޾� ����ϴ� ���α׷� �ۼ��ϱ�,
*		�����Դ� �Ǽ��� ������ �Ҽ��� ���� 2�ڸ����� ���.
* �ۼ���: ������
* ��¥: 2025-07-04
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_weight();

int main(void)
{
	get_weight();
	return 0;
}

void get_weight()
{
	double weight = 0;

	printf("������? ");
	scanf("%lf", &weight);

	printf("�Է��� �����Դ� %.2lfKG �Դϴ�.", weight);
}

