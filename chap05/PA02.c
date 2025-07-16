/*
* 파일명: PA02.c
* 내용: 이차원 평면에 있는 점의 좌표를 입력받아 어느 사분면의 점인치 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_point();

int main(void)
{
	get_point();
	return 0;
}

int get_point()
{
	int x, y = 0;

	printf("점의 좌표(x,y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1사분면에 있습니다.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2사분면에 있습니다.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3사분면에 있습니다.");
	}
	else
	{
		printf("4사분면에 있습니다.");
	}
}