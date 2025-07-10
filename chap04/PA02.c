/*
* 파일명: PA02.c
* 내용: 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ftoc();
double get_temperature(double f);

int main(void)
{
	input_ftoc();
	return 0;
}

void input_ftoc()
{
	double f = 0;

	printf("화씨 온도? ");
	scanf("%lf", &f);

	double result = get_temperature(f);

	printf("%.2lf F = %.2lf C", f, result);
}

double get_temperature(double f)
{
	double c;

	c = (f - 32) * 5.0 / 9.0;

	return c;
}