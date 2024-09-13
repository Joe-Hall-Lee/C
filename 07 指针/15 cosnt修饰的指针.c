#include <stdio.h>
#include <stdlib.h>

int main1501(void)
{
	const int a = 10;
	// a = 100; // err
	// 通过一级指针间接修改变量的值
	int* p = &a;
	*p = 100;
	return 0;
}

int main1502()
{
	char ch1[] = "hello";
	char ch2[] = "world";

	// 指向常量的指针
	// 可以修改指针变量的值，不可以修改指针变量指向内存空间的值
	const char* p = ch1;
	// *p = 'm'; // err
	// p[2] = 'm'; // *(p + 2) = 'm';
	// p = ch2; // ok

	return 0;
}

int main1503()
{
	char ch1 = "hello";
	char ch2 = "world";
	// 常量指针
	// 可以修改指针变量指向内存空间的值
	// 不可以修改指针变量的值
	char* const p = ch1;
	// p = ch2; // err
	// p[2] = 'm'; // ok
	*(p + 2) = 'm'; // ok
	printf("%s\n", p);
	printf("%s\n", ch1);
	return 0;
}

int main15()
{
	char ch1[] = "hello"; // 使用字符数组
	char ch2[] = "world";

	const char* const p = ch1;
	// p = ch2; // err
	// *p = 'm'; // err
	// p[2] = 'm'; // err

	char** p1 = &p;
	// *p1 = ch2;
	*(*p1 + 1) = 'm';
	printf("%s\n", p);
	return 0;
}