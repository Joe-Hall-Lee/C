#include <stdio.h>
#include <stdlib.h>

int main1301(void)
{
	// char ch[] = "Hello World!";
	// char* p = ch;

	// printf("%s\n", p);
	// printf("%c\n", *(p + 1));
	char* p = "Hello World!"; // 栈区字符串
	char ch[] = "Hello World!"; // 数据区常量区字符串
	char* p1 = "Hello World!";
	printf("%s\n", p);
	printf("%s\n", p1);

	// ch[2] = 'm';
	// p[2] = 'm'; // err
	*(p + 2) = 'm'; // err
	printf("%s\n", ch);
	printf("%s\n", p);
	return 0;
}

int main13(void)
{
	// 字符串数组
	// 指针数组
	// char ch1[] = "hello";
	// char ch2[] = "world";
	// char ch3[] = "dabaobei";
	// char* arr[] = { ch1, ch2, ch3 };
	// 字符串数组
	char* arr[] = { "hello", "world", "dabaobei" };
	// arr[0] arr[1] arr[2]
	// for (int i = 0; i < 3; i++)
	// {
	//     printf("%s\n", arr[i]);
	// }

	// 字符串排序
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - 1 - i; j++)
		{
			// 找首字符进行比较
			if (arr[j][0] > arr[j + 1][0])
			{
				// 交换指针数组元素进行排序
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
}