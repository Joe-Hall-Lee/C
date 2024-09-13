#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 数据区，全局变量可以和局部变量重名
// 全局变量，在函数外部定义的变量
// 作用域：整个项目中所有文件，如果在其他文件中使用，需要声明
// 生命周期：从程序创建到程序销毁
int a = 10;
void fun02()
{
	a = 100;
	printf("%d\n", a);
}

int main2()
{
	// 数据在操作时会采用就近原则
	printf("%d\n", a);
	int a = 123;
	// 匿名内部函数
	{
		// int a = 456;
		a = 456;
		printf("%d\n", a);
	}
	printf("%d\n", a);

	fun02();
	fun03();
	return EXIT_SUCCESS;
}