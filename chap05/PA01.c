/*
* ���ϸ�: PA01.c
* ����: ���� ��ǥ�� �Է¹޾� ��ũ�� ���� ���� ���� ���� �������� �˻��ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_squarePoint();

int main(void)
{
	get_squarePoint();
	return 0;
}

int get_squarePoint()
{
	int left = 0, right = 0, top = 0, bottom = 0;
	int x = 0, y = 0;

	printf("���� ������ �»����(left,top)? ");
	scanf("%d %d", &left, &top);

	printf("���� ������ ���ϴ���(right,bottom)? ");
	scanf("%d %d", &right, & bottom);

	printf("���� ��ǥ? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}

}