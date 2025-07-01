#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1 = 0, num2 = 0, plus = 0, minus = 0;

	printf("½Ç¼ö 2°³?");
	scanf("%lf %lf", &num1, &num2);

	plus = num1 + num2;
	minus = num1 - num2;

	printf("%lf + %lf = %lf\n", num1, num2, plus);
	printf("%lf - %lf = %lf", num1, num2, minus);

	return 0;
}