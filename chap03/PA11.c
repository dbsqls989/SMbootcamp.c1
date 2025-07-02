#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getExchangerate();

int main(void)
{
	getExchangerate();
	return 0;
}

double getExchangerate()
{
	int KRW = 0;
	double rate = 0, USD = 0;

	printf("KRW? ");
	scanf("%d", &KRW);

	printf("원/달러 환율? ");
	scanf("%lf", &rate);

	USD = KRW / rate;
	printf("KRW %d = USD %.2lf", KRW, USD);

	return USD;
}