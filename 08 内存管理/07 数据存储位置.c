#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 安全的常量，存储区域未数据区常量区
const int abc = 10;
// 未初始化全局变量
int a1;
// 初始化全局变量
int b1 = 10;
// 未初始化静态全局变量
static int c1;
// 初始化静态全局变量
static int d1 = 20;
int main7()
{
	int e1 = 10;
	// 未初始化的局部变量
	static int f1;
	// 初始化的局部变量
	static int h1 = 10;

	// 字符串常量
	char* p = "hello world";
	int arr[] = { 1, 2, 3, 4, 5 };
	// 指针
	int* pp = arr;
	printf("未初始化全局变量：%p\n", &a1);
	printf("初始化全局变量：%p\n", &b1);
	printf("未初始化静态全局变量：%p\n", &c1);
	printf("初始化静态全局变量：%p\n", &d1);

	printf("局部变量", &e1);
	printf("未初始化的局部变量：%p\n", &f1);
	printf("初始化的局部变量：%p\n", &h1);
	printf("字符串常量：%p\n", p);
	printf("指针：%p\n", pp);

	return EXIT_SUCCESS;
}