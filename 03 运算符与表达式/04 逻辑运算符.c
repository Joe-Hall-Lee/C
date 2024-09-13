#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main401()
{
	// // 所有非 0 的值都是真值
	// // ! 非：非真为假，非假为真
	// int a = 123;
	// printf("%d\n", !a);
	// int a = 10;
	// int b = 20;

	// // 单目运算符高于双目运算符
	// // && 与：同真为真，其余为假
	// printf("%d\n", !a && b);

	int a = 10;
	int b = 0;
	// ||或：同假为假，其余为真
	printf("%d\n", a || b);
	return 0;
}

int main402()
{
	int a = 10;
	int b = 20;
	int c = b = 30;
	printf("%d\n", c);
	return 0;
}