#include <stdio.h>
#include <stdlib.h>

int main501()
{
	int arr[] = { 123456, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 数组名是一个常量，不允许赋值
	// 数组名是数组首元素地址
	// arr = 100;  // err
	int* p;
	p = arr;
	// printf("%p\n", p);
	// printf("%p\n", arr);
	*p = 123;
	// p++;
	printf("%p\n", arr);
	printf("%p\n", p);
	// printf("%d\n", *p);
	for (int i = 0; i < 10; i++)
	{
		// printf("%d\n", arr[i]);
		// printf("%d\n", p[i]);
		// printf("%d\n", *(p + i));
		printf("%d\n", *p++);
	}
	// printf("%p\n", arr);
	// printf("&p\n", p);

	// 两个指针相减，得到的结果是两个指针的偏移量（步长）
	// 所有的指针类型，相减结果都是int类型
	int step = p - arr;

	printf("%d\n", step);
	return EXIT_SUCCESS;
}

int main502(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 指向数组的指针
	int* p = arr;

	// p是变量，arr是常量
	// p是一个指针，4个字节大小
	// arr是一个数组，40个字节大小
	printf("指针类型大小：%d\n", sizeof(p));
	printf("数组大小：%d\n", sizeof(arr));
	// p[i];
	// *(p + i);
	return 0;
}

// 数组作为函数参数会退化为指针，丢失数组的精度
void BubbleSort(int* src, int len)
{
	// int len = sizeof(src) / sizeof(src[0]);
	// printf("%d\n", sizeof(src));
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//if (src[j] > src[j + 1])
			//{
			//	int temp = src[j];
			//	src[j] = src[j + 1];
			//	src[j + 1] = temp;
			//}
			if (*(src + j) > *(src + j + 1))
			{
				int temp = *(src + j);
				*(src + j) = *(src + j + 1);
				*(src + j + 1) = temp;
			}
		}
	}
}
int main5(void)
{
	int arr[] = { 9, 1, 5, 6, 3, 8, 10, 2, 7, 4 };
	BubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}