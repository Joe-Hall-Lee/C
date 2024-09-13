#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main1()
{
	int score;
	scanf("%d", &score);
	// 如果表达式结果为真，执行{}对应的代码
	// if (表达式)
	// if (表达式) {} else {}
	// if (表达式1) {} else if (表达式2) else {}
	// 条件嵌套
	if (score > 700)
	{
		printf("我要上清北\n");
		if (score > 720)
		{
			printf("我要学习计算机\n");
		}
		else if (score > 710)
		{
			printf("我要学习微电子\n");
		}
		else
		{
			printf("我要学习材料\n");
		}
	}
	else if (score > 680)
	{
		printf("我要上华五\n");
	}
	else
	{
		printf("我要上大专\n");
	}

	return EXIT_SUCCESS;
}