#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2501(void)
{
	// 字符串截取 strtok 会破坏源字符串，用 \0 替换分割的标志位
	char ch[] = "www.itcast.cn"; // 123456@qq.com
	// www\0itcast.cn
	// www\0itcast\0cn
	char* p = strtok(ch, ".");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	// printf("%s\n", ch);
	// printf("%p\n", p);
	// printf("%p\n", ch);

	return 0;
}

int main2502(void)
{
	char ch[] = "123456@qq.com";
	char str[100] = { 0 };
	// 字符串备份
	strcpy(str, ch);

	char* p = strtok(ch, "@");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	return 0;
}

int main25(void)
{
	// char ch[] = "sfjldfsldhf\nsfsdfsdf\nsfsdfsdfs\ngfsdfd\nsfsdfsd";
	char ch[] = "你瞅啥\n瞅你咋地\n你再瞅一个试试\n大哥对不起\n脑瘫";
	char* p = strtok(ch, "\n");
	while (p)
	{
		printf("%s\n", p);
		p = strtok(NULL, "\n");
	}
	return 0;
}