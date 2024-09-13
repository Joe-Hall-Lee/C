#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 未初始化的全局变量
int abc;
// 未初始化的静态全局变量
// static int abc;
int main5()
{
	// int abc;
	// 未初始化的静态局部变量
	static int abc;
	// 局部变量未初始化值为乱码
	printf("%d\n", abc);

	return EXIT_SUCCESS;
}