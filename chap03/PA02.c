/*
* 파일명: PA02.c
* 내용: 가로와 세로의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_rectangle();

int main(void)
{
	get_rectangle();
	return 0;
}

int get_rectangle()
{
	int garo, sero = 0;

	printf("가로의 길이? ");
	scanf("%d", &garo);

	printf("세로의 길이? ");
	scanf("%d", &sero);

	printf("직사각형의 넓이: %d\n", garo * sero);
	printf("직사각형의 둘레: %d\n", (garo + sero) * 2);

}