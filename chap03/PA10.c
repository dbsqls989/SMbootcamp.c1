/*
* 파일명: PA10.c
* 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_dollarToWon();

int main(void)
{
	get_dollarToWon();
	return 0;
}

void get_dollarToWon()
{
	double USD, won, result = 0;

	printf("USD? ");
	scanf("%lf", &USD);

	printf("원/달러 환율? ");
	scanf("%lf", &won);
	
	result = USD * won;
	printf("USD %.2lf = KRW %.2lf",USD, result);
}