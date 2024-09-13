#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 无参函数
int fun01()
{
	return rand() % 10;
}
int main401(void)
{
	srand((unsigned)time(NULL));
	fun01();
	return EXIT_SUCCESS;
}

// 冒泡排序函数版
void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main402(void)
{
	int arr[] = { 9, 1, 7, 4, 2, 10, 3, 8, 6, 5 };
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < 10; i++)
	{
		printf("%d、n", arr[i]);
	}
	// void 空类型
	int a = 10;
	float b = 20.f;
	// void 类型不可以直接定义数据
	// void 类型可以作为函数的返回值类型，表示没有返回值
	// void c = 30;
	return 0;
}

void fun02()
{
	printf("hello world\n");
}

// 无参无返函数
void main4(void)
{
	printf("你瞅啥？程序就这样\n");
	return 0;
}