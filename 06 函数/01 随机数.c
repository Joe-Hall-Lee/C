#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main101()
{
	// time_t timer = time(NULL);
	// srand((size_t)time(NULL));
	// 添加随机数种子
	srand((size_t)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", rand() % 51 + 50); // 0-99 50-100
	}
	return 0;
}

int main1(void)
{
	// 双色球：6个红球 1-32；1个蓝球 1-16
	srand((size_t)time(NULL));
	int arr[6] = { 0 };
	int value = 0;
	int flag = 0;
	int j;

	flag = 0;
	for (int i = 0; i < 6; i++)
	{
		value = rand() % 32 + 1;
		// 去重
		for (j = 0; j < flag; j++)
		{
			if (arr[j] == value)
			{
				i--;
				break;
			}
		}
		if (j == flag)
		{
			arr[flag++] = value;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("+ %d\n", rand() % 16 + 1);

	return 0;
}