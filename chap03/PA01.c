/*
* ���ϸ�: PA01.c
* ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_square();

int main(void)
{
	get_square();
	return 0;
}

int get_square()
{
	int length = 0;

	printf("�� ���� ����? ");
	scanf("%d", &length);
	printf("���簢���� ����: %d\n", length * length);
	printf("���簢���� �ѷ�: %d", length * 4);
}