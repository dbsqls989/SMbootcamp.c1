/*
* 파일명: PA04.c
* 내용: 연도를 입력받아 윤년인지 검사하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-17
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_year();

int main(void)
{
	get_year();
	return 0;
}

int get_year()
{
	int year = 0;

	printf("연도? ");
	scanf("%d", &year);

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d년은 윤년입니다.", year);
	}
	else
	{
		printf("평년입니다");
	}

}