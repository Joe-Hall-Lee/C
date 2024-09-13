#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	float p = 3.567;
	int w = 2;
	// 隐式转换
	// double sum = p * w;
	// (数据类型) 强制类型转换运算符不会四舍五入
	int sum = (int)(p * w);
	printf("%d\n", sum);

	return EXIT_SUCCESS;
}