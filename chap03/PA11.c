/*
* 파일명: PA11.c
* 내용: 원/달러 환율과 원화를 입력받아 몇 달러인지 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_wontoDollar();

int main(void)
{
	get_wontoDollar();
	return 0;
}

void get_wontoDollar()
{
	int won = 0;
	double dollar, result = 0;

	printf("KRW? ");
	scanf("%d", &won);

	printf("원/달러 환율? ");
	scanf("%lf", &dollar);

	result = won / dollar;
	printf("KRW %d = USD %.2lf", won, result);
}