/*
* ���ϸ�: PA06.c
* ����: ����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_aptArea();

int main(void)
{
	get_aptArea();
	return 0;
}
void get_aptArea()
{
	double area, result = 0;

	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf", &area);

	result = area * 0.3025;
	printf("%.2lf �������� = %.2lf ��", area, result);
}