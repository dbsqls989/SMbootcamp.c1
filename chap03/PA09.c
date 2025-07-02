#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double lbtokg();

int main(void)
{
	lbtokg();
	return 0;
}

double lbtokg()
{
	int ld = 0;
	double kg = 0;

	printf("¹«°Ô(lb)? ");
	scanf("%d",&ld);

	kg = ld * 0.45359237;

	printf("%d ld = %lf kg", ld, kg);

	return kg;
}

