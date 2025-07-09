/*
* 파일명: PA01.c
* 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_square();

int main(void)
{
	get_square();
	return 0;
}

int get_square()
{
	int length = 0;

	printf("한 변의 길이? ");
	scanf("%d", &length);
	printf("정사각형의 넓이: %d\n", length * length);
	printf("정사각형의 둘레: %d", length * 4);
}