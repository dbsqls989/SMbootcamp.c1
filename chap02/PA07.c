/*
* ���ϸ�: PA07.c
* ����: Ŀ�� ������� �ֹ� ������ �Է¹޾� ����ϴ� ���α׷� �ۼ�.
* �ۼ���: ������
* ��¥: 2025-07-04
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_coffee();

int main(void)
{
	get_coffee();
	return 0;
}

void get_coffee()
{
	int num = 0;
	char size = 0;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &num);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, num);
}