#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main201(void)
{
	// int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	// int arr[10] = { 1, 2, 3, 4, 5 };
	// int arr[10] = { 0 };
	// int arr[10] = { 1 };
	int arr[10];
	arr[0] = 1;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return EXIT_SUCCESS;
}

int main202(void)
{
	// int i = 10;
	// 数组元素必须是常量、常量表达式
	// 数组必须预先知道大小。动态数组 -> 开辟堆空间
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
int main2(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", arr[-1]);
	printf("%d\n", arr[10]);
	for (int i = 0; i < 20; i++)
	{
		// 数组下标越界 0-9
		printf("%d\n", arr[i]);
	}
	return 0;
}