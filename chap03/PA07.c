/*
* ���ϸ�: PA07.c
* ����: �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-09
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getsquared();

int main(void)
{
	getsquared();
	return 0;
}

void getsquared()
{
	double num = 0;

	printf("�Ǽ�? ");
	scanf("%lf", &num);

	printf("����: %e\n", num * num);
	printf("������: %e", num * num * num);

}