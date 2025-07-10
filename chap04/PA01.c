/*
* 파일명: PA01.c
* 내용: 질량과 속력을 실수로 입력 받아 운동에너지를 구하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_woondongEnergy(double kg, double m);
void get_km();

int main(void)
{
	get_km();
	return 0;
}

void get_km()
{
	double kg, m = 0;

	printf("질량(kg)? ");
	scanf("%lf", &kg);

	printf("속력(m/s)? ");
	scanf("%lf", &m);

	double result = get_woondongEnergy(kg,m);

	printf("운동에너지: %.2lf J", result);
}

double get_woondongEnergy(double kg, double m)
{
	double we = 0;

	we = 1.0 / 2.0 * kg * m * m;

	return we;
}