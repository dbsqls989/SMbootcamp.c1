#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;

	printf("��?");
	scanf("%d", &hour);

	printf("��?");
	scanf("%d", &min);

	printf("��?");
	scanf("%d", &sec);

	printf("�Է��� �ð��� %02d:%02d:%02d �Դϴ�.", hour, min, sec);

	return 0;
}