#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 函数声明
// extern int add01(int a, int b);
// int add01(int a, int b);
int add01(int, int);
// extern int add(int a, int b);
// 函数定义
// 函数调用

int main5(void)
{
	int a = add01(10, 20);
	printf("%d\n", a);
	return 0;
}
// 函数定义，只能定义一次
int add01(int a, int b)
{
	return a + b;
}