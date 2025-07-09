/*
* 파일명: PA05.c
* 내용: 길이를 인치로 입력받아 센티미터로 변환하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double inchtocm(void);

int main(void)
{
	inchtocm();
	return 0;
}
double inchtocm(void)
{
	double inch = 0, cm = 0;
	printf("길이(inch)? ");
	scanf("%lf", &inch);

	cm = inch * 2.54;

	printf("%lf inch = %lf cm", inch, cm);
}
