#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double inchtocm(void);

int main(void)
{
	inchtocm();
	return 0;
}

double inchtocm(void)
{
	int inch = 0;
	double cm = 0;

	printf("±Ê¿Ã(inch)? ");
	scanf("%d", &inch);

	cm = inch * 2.54;

	printf("%d inch = %lf cm", inch, cm);
	return cm;
}