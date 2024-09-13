#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main4(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	while (i < j)
	{
		// 通过临时变量交换数据
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return EXIT_SUCCESS;
}