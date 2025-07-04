/*
* 파일명: PA02.c
* 내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램 작성하기
*		번호-정수로, 학점-실수 로 입력받음.
* 작성자: 김윤빈
* 날짜: 2025-07-04 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student();

int main(void)
{
	student();
	return 0;
}

void student()
{
	int num = 0;
	float grade = 0;

	printf("번호? ");
	scanf("%d", &num);

	printf("학점? ");
	scanf("%f", &grade);

	printf("%d 번 학생의 학점은 %f 입니다.", num, grade);

}