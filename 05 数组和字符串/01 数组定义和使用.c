#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main101()
{
	// 变量定义
	// 数据类型 变量 = 值
	//  数组定义
	// 数据类型 数组名[数组大小] = { 值 1, 值 2, 值 3 }
	int arr[10] = { 9, 4, 2, 1, 8, 5, 3, 6, 10, 7 };

	// 数组下标：数组名[下标]
	// 数组下标是从 0 开始的到数组元素个数 - 1
	// printf("%d\n", arr[0]);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return EXIT_SUCCESS;
}

int main102()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 数组参与计算
	arr[3] = arr[5];
	arr[2] = arr[3] * 2;

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

int main1(void)
{
	// 数组在内存中存储方式和大小
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 下标为 0 的元素地址
	// printf("%p\n", &arr[0]);
	// printf("%p\n", &arr[1]);
	// printf("%p\n", &arr[2]);
	// printf("%p\n", &arr[3]);
	// printf("%p\n", &arr[4]);
	// 数组名是一个地址常量常量，指向数组首地址的常量
	// printf("%p\n", arr);
	printf("数组在内存中占的大小：%d\n", sizeof(arr));
	printf("数组元素大小：%d\n", sizeof(arr[0]));
	printf("数组元素个数：%d\n", sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}