/*
* 파일명: PA11.c
* 내용: 원주율 파이 값을 여러가지 방법으로 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025-07-04
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_pi();

int main(void)
{
	get_pi();
	return 0;
}

void get_pi()
{
	double pi = 3.141592;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);

}