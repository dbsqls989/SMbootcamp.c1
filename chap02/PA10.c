/*
* ���ϸ�: PA10.c
* ����: ������ 8����,10����,16���� �� �ϳ��� �Է¹޾� 
		���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷� �ۼ�.
* �ۼ���: ������
* ��¥: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertnum();

int main(void)
{
	convertnum();
	return 0;
}

void convertnum()
{
	int num = 0;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf("%i", &num);

	printf("8����: %#o\n", num);
	printf("10����: %d\n", num);
	printf("16����: %#x", num);
}