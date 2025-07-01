#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year = 0, month = 0, day = 0;

    printf("연?");
    scanf("%d", &year);

    printf("월?");
    scanf("%d", &month);

    printf("일?");
    scanf("%d", &day);

    printf("입력하신 날짜는 %d년 %d월 %d일 입니다.", year, month, day);

    return 0;
}
