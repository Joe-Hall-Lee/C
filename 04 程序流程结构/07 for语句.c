#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main701()
{
	// int i; gcc -o hello.out hello.c -std=c99
	int j = 5;
	for (int i = 0; i < 10, j < 10; i++, j += 5)
	{
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}

int main702(void)
{
	int i = 0;
	// while(1) for(;;)
	for (;;)
	{
		// if (i >= 10)
		//{
		//	// 在循环语句中遇到break表示结束循环
		//	break;
		// }
		printf("%d\n", i);
		i++;
	}
}

// 猜数字
// 通过程序随机一个1-100之内的数

int main7(void)
{
	// 产生随机数
	// 1. 导入头文件 time.h、stdlib.h
	// 2. 添加随机数种子
	// 3. 获取随机数
	srand((unsigned int)time(NULL)); // 每次随机数不一样

	// int value = rand() % 10;  // 0~9
	// for (int i = 0; i < 10; i++)
	// {
	//     int value = rand() % 10;
	//	   printf("%d\n", value);
	// }

	int value = rand() % 100; // 0-99
	int num;
	// for (;;)
	while (1)
	{
		printf("请输入数字：\n");
		scanf("%d", &num);
		if (value > num)
			printf("您输入的太小了\n");
		else if (value < num)
			printf("您输入的太大了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	return 0;
}