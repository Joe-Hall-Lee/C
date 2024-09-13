#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main601()
{
	int i = 0;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 10);

	// while (i < 10)
	//{
	//	printf("%d\n", i);
	//	i++;
	// }
	return EXIT_SUCCESS;
}

// 水仙花，从 100-999，各个位数的立方和相加等于这个数本身就是一个水仙花数
int main6(void)
{
	int i = 100;
	do
	{
		// 个位数
		int a = i % 10;
		// 十位数
		int b = i / 10 % 10;
		// 百位数
		int c = i / 100;
		// 条件判断
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
			printf("%d\n", i);
		i++;
	} while (i <= 999);
	return EXIT_SUCCESS;
}