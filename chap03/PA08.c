#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ydtom();

int main(void)
{
	ydtom();
	return 0;
}

double ydtom()
{
	int yd = 0;
	double m = 0;

	printf("����(yd)? ");
	scanf("%d", &yd);

	m = yd * 0.9144;

	printf("%d yd = %lf m", yd, m);

	return m;
}