/*
* 파일명: PA01.c
* 내용: 점의 좌표를 입력받아 스크린 상의 선택 영역 내의 점인지를 검사하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_squarePoint();

int main(void)
{
	get_squarePoint();
	return 0;
}

int get_squarePoint()
{
	int left = 0, right = 0, top = 0, bottom = 0;
	int x = 0, y = 0;

	printf("선택 영역의 좌상단점(left,top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점(right,bottom)? ");
	scanf("%d %d", &right, & bottom);

	printf("점의 좌표? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 밖의 점입니다.");
	}

}