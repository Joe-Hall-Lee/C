#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main601()
{
	//字符型变量
	char ch = '0';

	//打印字符型变量
	printf("%c\n", ch);
	//打印字母 a 对应十进制数
	printf("%d\n", ch);
	//unsigned int len = sizeof(ch);
	printf("字符型大小：%d\n", sizeof(ch));
	return EXIT_SUCCESS;
}

int main602(void)
{
	//char ch1 = 'a';
	//char ch2 = 'A';
	//printf("%d\n", ch1 - ch2);
	char ch;
	scanf("%c", &ch);

	printf("%c\n", ch - 32);
	printf("\"你瞅啥\"");
	//打印%需要使用%%
	printf("30%%");
	return 0;
}