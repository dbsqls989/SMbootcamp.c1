/*
* ���ϸ�: PA03.c
* ����: �Ž������� �ݾ��� �Է¹޾� ������,����,õ��,���,�ʿ�¥���� 
		���� �� �� �ʿ����� ���ؼ� ����ϴ� ���α׷� �ۼ��ϱ�
* �ۼ���: ������
* ��¥: 2025-07-16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_changeMoney();

int main(void)
{
	get_changeMoney();
	return 0;
}

int get_changeMoney()
{
	int money = 0;
	int oManone = 0, manone = 0, oCheonone = 0, cheonone = 0, backone = 0, sipone = 0;

	printf("�Ž��� ��? ");
	scanf("%d", &money);

	money = (money / 10) * 10;
	printf("�Ž����� (10���̸� ����): %d \n ", money);

	if (money >= 50000);
	{
		oManone = money / 50000;
		money %= 50000; //money�� ���� �� ����
	}
	if (money >= 10000);
	{
		manone = money / 10000;
		money %= 10000;
	}
	if (money >= 5000);
	{
		oCheonone = money / 5000;
		money %= 5000;
	}
	if (money >= cheonone)
	{
		cheonone = money / 1000;
		money %= 1000;
	}
	if (money >= backone);
	{
		backone = money / 100;
		money %= 100;
	}
	if (money >= sipone);
	{
		sipone = money / 10;
		money %= 10;
	}
	printf("50000�� %d��\n",oManone);
	printf(" 10000�� %d��\n", manone);
	printf(" 5000�� %d��\n", oCheonone);
	printf(" 1000�� %d��\n", cheonone);
	printf(" 100�� %d��\n", backone);
	printf(" 10�� %d��", sipone);

	return 0;
}