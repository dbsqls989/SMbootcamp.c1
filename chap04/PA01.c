/*
* ���ϸ�: PA01.c
* ����: ������ �ӷ��� �Ǽ��� �Է� �޾� ��������� ���ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_woondongEnergy(double kg, double m);
void get_km();

int main(void)
{
	get_km();
	return 0;
}

void get_km()
{
	double kg, m = 0;

	printf("����(kg)? ");
	scanf("%lf", &kg);

	printf("�ӷ�(m/s)? ");
	scanf("%lf", &m);

	double result = get_woondongEnergy(kg,m);

	printf("�������: %.2lf J", result);
}

double get_woondongEnergy(double kg, double m)
{
	double we = 0;

	we = 1.0 / 2.0 * kg * m * m;

	return we;
}