#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main5()
{
	//整型变量
	int a = 10;
	//短整型变量
	short b = 20;

	//长整型变量
	long c = 30;
	//长长整型变量
	long long d = 40;

	//short<=int<=long<long long
	printf("%d\n", a);
	//占位符，表示输出一个短整型数据
	printf("%hd\n", b);
	//占位符，表示输出一个长整型数据
	printf("%ld\n", c);
	//占位符，表示输出一个长长整型数据
	printf("%lld\n", d);

	//sizeof:计算数据类型在内存中占的字节(BYTE)大小
	//1B = 8bit
	//sizeof(数据类型)、sizeof(变量名)、sizeof 变量名
	unsigned int len = sizeof(short);

	//printf("%d\n", len);
	printf("整型：%d\n", sizeof(a));  //4 = 32bit
	printf("短整型：%d\n", sizeof(b));  //2
	printf("长整型：%d\n", sizeof(c));  //4
	printf("长长整型：%d\n", sizeof(d));  //8

	return EXIT_SUCCESS;
}