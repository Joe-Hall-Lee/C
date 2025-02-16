#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 函数定义
int my_strcmp(char ch1[], char ch2[])
{
	int i = 0;
	while (ch1[i] == ch2[i])
	{
		// 是否到字符串结尾
		if (ch1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return ch1[i] > ch2[i] ? 1 : -1;
}
int main3(void)
{
	// 比较两个字符串，如果相同返回 0，如果不同返回 1 或 -1
	char ch1[] = "hello";
	char ch2[] = "hallo";

	int value = my_strcmp(ch1, ch2);
	if (value == 0)
	{
		printf("两个字符串相同");
	}
	else
	{
		printf("两个字符串不相同");
	}
	return 0;
}