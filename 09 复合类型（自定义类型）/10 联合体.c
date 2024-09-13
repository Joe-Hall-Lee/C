#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

union Var
{
	int a;
	float b;
	double c;
	char d;
	short f[6];  // 12
};

int main10()
{
	union Var var;
	var.a = 100;
	var.b = 3.14;
	printf("%d\n", var.a);
	printf("%f\n", var.b);

	printf("%d\n", sizeof(var));
	printf("%p\n", &var.a);
	printf("%p\n", &var.b);
	printf("%p\n", &var.c);
	system("pause");
	return EXIT_SUCCESS;
}