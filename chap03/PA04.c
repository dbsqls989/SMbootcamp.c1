/*
* ���ϸ�: PA04.c
* ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾�
*       �� ���� ���� ���ϴ� ���α׷� �ۼ��ϱ�
* �ۼ���: ������
* ��¥: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_workAmount();

int main(void)
{
	get_workAmount();
	return 0;
}

void get_workAmount()
{
	int N, m = 0;
	double work = 0;

	printf("��(N)? ");
	scanf("%d", &N);

	printf("�̵��Ÿ�(m)? ");
	scanf("%d", &m);

	work = N * m;

	printf("���� ��: %.2lf J", work);
}