#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 返回值类型 函数名 (参数列表)
// {
//     代码体
//     return 0;
// }
int add(int a, int b)
{
	// int sum = a + b;
	// return sum;
	return a + b;
}
void print()
{
	printf("hello world\n");
}
int main201(void)
{
	int a = 10;
	int b = 20;
	int c;
	// 函数调用
	c = add(a, b);
	printf("%d\n", c);

	print();
	return 0;
}
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main2(void)
{
	int a = 10;
	int b = 20;
	printf("交换前数据：\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	// 函数调用
	swap(a, b);
	printf("交换后数据：\n");

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}