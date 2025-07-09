/*
* 파일명: PA08.c
* 내용: 길이를 야드로 입력받아 미터로 변환해서 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ydtocm();

int main(void)
{
	ydtocm();
	return 0;
}

void ydtocm()
{
	int yd = 0;
	double m = 0;
	
	printf("길이(yd)? ");
	scanf("%d", &yd);

	m = yd * 0.9144;
	printf("%d yd = %lf m ", yd, m);
}
