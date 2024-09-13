#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main3(void)
{
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("最重的小猪体重为：%d\n", max);
	return EXIT_SUCCESS;
}