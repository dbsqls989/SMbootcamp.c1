/*
* 파일명: PA07.c
* 내용: 커피 사이즈와 주문 수량을 입력받아 출력하는 프로그램 작성.
* 작성자: 김윤빈
* 날짜: 2025-07-04
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_coffee();

int main(void)
{
	get_coffee();
	return 0;
}

void get_coffee()
{
	int num = 0;
	char size = 0;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%c %d", &size, &num);

	printf("%c 사이즈 %d잔을 주문합니다.", size, num);
}