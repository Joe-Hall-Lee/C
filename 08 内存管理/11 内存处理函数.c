#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main1101(void)
{
	// int* p = (int*)malloc(sizeof(int) * 10);
	// // memset() 重置内存空间的值

	// // memset(p, 0, 40);
	// memset(p, 1, 40);
	// for (int i = 0; i < 10; i++)
	// {
	//     printf("%d\n", p[i]);
	// }
	// free(p);
	// char ch[10];
	// memset(ch, 'A', sizeof(char) * 10);
	// printf("%s\n", ch);

	return EXIT_SUCCESS;
}
int main1102(void)
{
	// int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// int* p = (int*)malloc(sizeof(int) * 10);
	// memcpy(p, arr, sizeof(int) * 10);
	// for (int i = 0; i < 10; i++)
	// {
	//     printf("%d\n", p[i]);
	// }
	// free(p);

	// char ch[] = "hello\0 world";
	// char str[100];
	// // 字符串拷贝遇到 \0 停止
	// // strcpy(str, ch);
	// // 内存拷贝，拷贝的内容和字节有关，
	// memcpy(str, ch, 13);
	// // printf("%s\n", str);
	// for (int i = 0; i < 13; i++)
	// {
	//     printf("%c", str[i]);
	// }

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 如果拷贝的目标和源发生重叠，可能报错
	memcpy(&arr[5], &arr[3], 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return EXIT_SUCCESS;
}
int main1103(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 如果拷贝的目标和源发生重叠，可能报错
	// memcpy(&arr[5], &arr[3], 20);
	memmove(&arr[5], &arr[3], 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return EXIT_SUCCESS;
}

int main11(void)
{
	// int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// int arr2[] = { 1, 2, 3, 4, 5 };
	char arr1[] = "hello\0 world";
	char arr2[] = "hello\0 world";
	// strcmp();
	int value = memcmp(arr1, arr2, 13);
	printf("%d\n", value);
	return 0;
}