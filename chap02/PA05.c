/*
* 파일명: PA05.c
* 내용: 몸무게를 입력받아 출력하는 프로그램 작성하기,
*		몸무게는 실수로 받으며 소수점 이하 2자리까지 출력.
* 작성자: 김윤빈
* 날짜: 2025-07-04
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_weight();

int main(void)
{
	get_weight();
	return 0;
}

void get_weight()
{
	double weight = 0;

	printf("몸무게? ");
	scanf("%lf", &weight);

	printf("입력한 몸무게는 %.2lfKG 입니다.", weight);
}

