/*
* ���ϸ�: PA02.c
* ����: ������ ��鿡 �ִ� ���� ��ǥ�� �Է¹޾� ��� ��и��� ����ġ ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_point();

int main(void)
{
	get_point();
	return 0;
}

int get_point()
{
	int x, y = 0;

	printf("���� ��ǥ(x,y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3��и鿡 �ֽ��ϴ�.");
	}
	else
	{
		printf("4��и鿡 �ֽ��ϴ�.");
	}
}