/*
* ���ϸ�: PA02.c
* ����: ���ο� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_rectangle();

int main(void)
{
	get_rectangle();
	return 0;
}

int get_rectangle()
{
	int garo, sero = 0;

	printf("������ ����? ");
	scanf("%d", &garo);

	printf("������ ����? ");
	scanf("%d", &sero);

	printf("���簢���� ����: %d\n", garo * sero);
	printf("���簢���� �ѷ�: %d\n", (garo + sero) * 2);

}