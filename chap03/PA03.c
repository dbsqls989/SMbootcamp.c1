/*
* ���ϸ�: PA03.c
* ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_motionEnergy();

int main(void)
{
	get_motionEnergy();
	return 0;
}

void get_motionEnergy()
{
	int kg, m = 0;
	double motionE = 0;

	printf("����(kg)? ");
	scanf("%d", &kg);
	printf("����(m)? ");
	scanf("%d", &m);

	motionE = 9.8 * kg * m;
	printf("��ġ������: %lfJ", motionE);
}