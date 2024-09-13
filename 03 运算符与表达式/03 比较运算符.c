#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main3()
{
	int a = 10;
	int b = 20;
	int c = 10;
	// printf("%d\n", a != b);
	// 比较运算符返回值为 0 或者 1，表示真或假
	printf("%d\n", c = ++a <= b * 2);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return EXIT_SUCCESS;
}