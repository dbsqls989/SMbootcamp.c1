#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;

	printf("시?");
	scanf("%d", &hour);

	printf("분?");
	scanf("%d", &min);

	printf("초?");
	scanf("%d", &sec);

	printf("입력한 시간은 %02d:%02d:%02d 입니다.", hour, min, sec);

	return 0;
}