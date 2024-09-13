#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main101()
{
	int a = 10;
	int b = 0;
	// printf("%d\n", a / b);
	// 取余只能对整型操作
	// printf("%d\n", a % b);
	return EXIT_SUCCESS;
}

int main102()
{
	int a = 10;
	// a = a + 1;  // 11
	// a++;  // 后自增
	// ++a;  // 前自增
	// 前自增是在表达式之前进行 ++ 再进行表达式计算
	// 后自增先进性表达式计算在进行 ++ 操作
	// int b = ++a * 10;
	// a++;
	int b = a * 10;
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}

int main103(void)
{
	int a = 10;
	// a--;
	// 二义性
	int b = ++a + --a + a++;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}