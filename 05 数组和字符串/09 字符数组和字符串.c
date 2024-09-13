#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main901(void)
{
	// 定义字符数组
	// char arr[100] = { 110, 111, 112, 101, 123, 98, 99 };
	// char arr[] = { "hello" };
	// printf("%s\n", arr);
	// char arr[6] = { 'h', 'e', 'l', 'l', 'o' };
	// 字符
	// char ch = 'a';
	// 字符串：字符串结束标志位 \0，数字 0 等同于 \0，但是不等同于 '0'
	// char * arr = "hello";
	// char arr[] = "hello";
	// char arr[] = { 'h', 'e', 'l', 'l', 'o', '\0' };

	// printf("%s\n", arr);
	// printf("%d\n", sizeof(arr)); // sizeof(数据类型)

	// for (int i = 0; i < sizeof(arr); i++)
	// {
	//     printf("%c ", arr[i]);
	// }
	return 0;
}

int main9()
{
	// 定义字符数组存储字符串
	char ch[11];

	scanf("%10s", ch);
	printf("%s\n", ch);

	return 0;
}

int main903(void)
{
	char ch1[] = "hello";
	char ch2[] = "world";
	char ch3[20];

	int i = 0;
	int j = 0;
	while (ch1[i] != '\0')
	{
		ch3[i] = ch1[i];
		i++;
	}

	while (ch2[j] != '\0')
	{
		ch3[i + j] = ch2[j];
		j++;
	}

	ch3[i + j] = '\0';
	printf("%s\n", ch3);

	return 0;
}