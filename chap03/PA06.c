/*
* 파일명: PA06.c
* 내용: 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_aptArea();

int main(void)
{
	get_aptArea();
	return 0;
}
void get_aptArea()
{
	double area, result = 0;

	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &area);

	result = area * 0.3025;
	printf("%.2lf 제곱미터 = %.2lf 평", area, result);
}