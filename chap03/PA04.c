/*
* 파일명: PA04.c
* 내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아
*       한 일의 양을 구하는 프로그램 작성하기
* 작성자: 김윤빈
* 날짜: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_workAmount();

int main(void)
{
	get_workAmount();
	return 0;
}

void get_workAmount()
{
	int N, m = 0;
	double work = 0;

	printf("힘(N)? ");
	scanf("%d", &N);

	printf("이동거리(m)? ");
	scanf("%d", &m);

	work = N * m;

	printf("일의 양: %.2lf J", work);
}