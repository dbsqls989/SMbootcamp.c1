/*
* ���ϸ�: PA04.c
* ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-17
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_year();

int main(void)
{
	get_year();
	return 0;
}

int get_year()
{
	int year = 0;

	printf("����? ");
	scanf("%d", &year);

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d���� �����Դϴ�.", year);
	}
	else
	{
		printf("����Դϴ�");
	}

}