/*
* ���ϸ�: PA08.c
* ����: ���̸� �ߵ�� �Է¹޾� ���ͷ� ��ȯ�ؼ� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ydtocm();

int main(void)
{
	ydtocm();
	return 0;
}

void ydtocm()
{
	int yd = 0;
	double m = 0;
	
	printf("����(yd)? ");
	scanf("%d", &yd);

	m = yd * 0.9144;
	printf("%d yd = %lf m ", yd, m);
}
