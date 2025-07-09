/*
* 파일명: PA09.c
* 내용: 무게를 파운드로 입력받아 킬로그램으로 변환해서 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-09
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ldtokg();

int main(void)
{
	ldtokg();
	return 0;
}

void ldtokg()
{
	int ld = 0;
	double kg = 0;

	printf("무게(ld)? ");
	scanf("%d", &ld);

	kg = ld * 0.45359237;
	printf("%d ld = %lf kg", ld, kg);
}