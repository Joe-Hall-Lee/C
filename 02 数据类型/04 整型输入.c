//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable:4996)
int main4(void)
{
	int a;

	// 通过键盘输入赋值
	// & 运算符，表示取地址运算符
	scanf("%d", &a);

	printf("%d\n", a);
	return 0;
}