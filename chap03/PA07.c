/*
* 파일명: PA07.c
* 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-09
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getsquared();

int main(void)
{
	getsquared();
	return 0;
}

void getsquared()
{
	double num = 0;

	printf("실수? ");
	scanf("%lf", &num);

	printf("제곱: %e\n", num * num);
	printf("세제곱: %e", num * num * num);

}