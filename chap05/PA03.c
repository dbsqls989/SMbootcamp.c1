/*
* 파일명: PA03.c
* 내용: 거스름돈의 금액을 입력받아 오만원,만원,천원,백원,십원짜리가 
		각각 몇 개 필요한지 구해서 출력하는 프로그램 작성하기
* 작성자: 김윤빈
* 날짜: 2025-07-16
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

	printf("거스름 돈? ");
	scanf("%d", &money);

	money = (money / 10) * 10;
	printf("거스름돈 (10원미만 절사): %d \n ", money);

	if (money >= 50000);
	{
		oManone = money / 50000;
		money %= 50000; //money에 남은 돈 저장
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
	printf("50000원 %d장\n",oManone);
	printf(" 10000원 %d장\n", manone);
	printf(" 5000원 %d장\n", oCheonone);
	printf(" 1000원 %d장\n", cheonone);
	printf(" 100원 %d장\n", backone);
	printf(" 10원 %d장", sipone);

	return 0;
}