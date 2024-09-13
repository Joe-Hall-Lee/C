#include <stdio.h>
#include <stdlib.h>

int main701(void)
{
	// 定义数组：数据类型 数组名[元素个数] = { 值 1, 值 2, ...};
	// 定义指针数组
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };
	// arr[0] arr[1] arr[2]
	// printf("%d\n", *arr[0]);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", *arr[i]);
	}
	printf("指针数组大小：%d\n", sizeof(arr));
	printf("指针数组元素大小：%d\n", sizeof(arr[0]));
	return 0;
}

int main7(void)
{
	// 指针数组里面元素存储的是指针
	int a[] = { 1, 2, 3 };
	int b[] = { 4, 5, 6 };
	int c[] = { 7, 8, 9 };
	// 指针数组是一个特殊的二维数组模型
	// 指针数组对应于二级指针

	int* arr[] = { a, b, c };
	// 指针数组和二级指针建立关系
	int** p = arr;

	// arr 是指针数组的首地址
	// printf("%p\n", arr);
	// printf("%p\n", &arr[0]);
	// printf("%p\n", a);
	// printf("%d\n", arr[0][1]);
	// printf("%p\n", arr[0]);
	// printf("%p\n", a); // a[1]
	// printf("%p\n", &a[0]); // a[1]
	// for (int i = 0; i < 3; i++)
	// {
	//     printf("%d\n", *arr[i]);
	// }
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// 二维数组
			// printf("%d ", arr[i][j]);

			// printf("%d ", *(arr[i] + j));
			printf("%d ", *(*(arr + i) + j));
		}
		puts("");
	}
	return 0;
}