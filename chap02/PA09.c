/*
* 파일명: PA09.c
* 내용: 16진수 정수를 입력받아 10진수로 출력하는 프로그램 작성.
* 작성자: 김윤빈
* 날짜: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertnum();

int main(void)
{
	convertnum();
	return 0;
}

void convertnum()
{
	int num = 0;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수 %d 입니다.", num, num);
}