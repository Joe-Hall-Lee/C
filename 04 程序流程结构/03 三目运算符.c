#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX(a, b) (a)>(b)?(a):(b)
int main01()
{
	int a = 1;
	int b = 20;
	printf("%d\n", MAX(a, b));

	return 0;
}

int main3()
{
	int a = 10;
	int b = 20;
	int c = 30;
	// int c;
	// ���ʽ 1 ? ���ʽ 2 : ���ʽ 3
	// c = a > b ? a : b;
	printf("���ֵΪ��%d\n", a > b ? a : b);

	printf("���ֵΪ��%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));

	//if (a > b)
	//	printf("a ��\n");
	//else
	//	printf("b ��\n");

	return EXIT_SUCCESS;
}