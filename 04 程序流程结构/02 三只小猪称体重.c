#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main2()
{
	int a, b, c;
	printf("请输入三只小猪体重：\n");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		// a 大于 b
		if (a > c)
		{
			// a 大于 c
			printf("小猪 a 最重\n");
		}
		else
		{
			printf("小猪 c 最重\n");
		}
	}
	else
	{
		if (b > c)
		{
			printf("小猪 b 最重\n");
		}
		else
		{
			printf("小猪 c 最重\n");
		}
	}
	return EXIT_SUCCESS;
}