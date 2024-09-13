#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main1001(void)
{
	char ch[100] = "hello world";

	// 通过键盘获取一个字符串
	// gets 接收字符串可以带空格

	gets(ch);
	// 通过正则表达式，获取带空格字符串
	// scanf("%s[^\n]", ch);
	printf("%s\n", ch);
	return 0;
}

int main1002()
{
	char ch[10];
	// "hello\n\0"

	// fgets可以接收空格
	// fgets 获取字符串少于元素个数会有 \n，大于等于没有 \n
	fgets(ch, sizeof(ch), stdin);
	printf("%s", ch);
	return 0;
}

int main1003(void)
{
	char ch[] = "hello world";
	// puts 自带换行
	// puts(ch);
	// puts("hello\0 world");
	puts("");
	return 0;
}

int main1004(void)
{
	char ch[] = "hello world";
	// fputs(ch, stdout);
	// printf("%s", ch);
	return 0;
}