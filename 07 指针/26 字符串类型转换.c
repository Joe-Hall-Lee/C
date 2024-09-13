#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2601(void)
{
	char ch[] = "-123-456abc123";
	int i = atoi(ch);
	printf("%d\n", i);
	return 0;
}

int main2602(void)
{
	char ch[] = "-123.456abc123";
	double i = atof(ch);
	printf("%.2f\n", i);
	return 0;
}

int main(void)
{
	char ch[] = "-123.456abc123";
	long i = atol(ch);
	printf("%ld\n", i);
	return 0;
}