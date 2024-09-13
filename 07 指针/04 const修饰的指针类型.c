#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main401()
{
	// 常量
	const int a = 10;
	// a = 100;  // err
	// 指针间接修改常量的值

	int* p = &a;
	*p = 100;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}

int main402(void)
{
	int a = 10;
	int b = 20;
	const int* p = &a;

	// p = &b;  // ok
	// *p = 100;  // err
	printf("%d\n", *p);
	return 0;
}

int main403(void)
{
	int a = 10;
	int b = 20;
	int* const p = &a;
	// p = &b;  // err
	*p = 200;

	printf("%d\n", a);
	return 0;
}

int main4(void)
{
	int a = 10;
	int b = 20;
	// const 修饰指针类型，修饰指针变量
	const int* const p = &a;

	// 二级指针操作
	int** pp = &p;
	// *pp = &b;
	**pp = 100;

	printf("%d\n", *p);
	// p = &b;  // err
	// *p = 100;  // err
	return 0;
}