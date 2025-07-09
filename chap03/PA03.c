/*
* 파일명: PA03.c
* 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_motionEnergy();

int main(void)
{
	get_motionEnergy();
	return 0;
}

void get_motionEnergy()
{
	int kg, m = 0;
	double motionE = 0;

	printf("질량(kg)? ");
	scanf("%d", &kg);
	printf("높이(m)? ");
	scanf("%d", &m);

	motionE = 9.8 * kg * m;
	printf("위치에너지: %lfJ", motionE);
}