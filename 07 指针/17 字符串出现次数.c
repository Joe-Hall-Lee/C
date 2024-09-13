#include <stdio.h>
#include <stdlib.h>
char* my_strstr(char* src, char* dest)
{
	char* fsrc = src; // 遍历源字符串指针
	char* rsrc = src; // 记录每次字符串首地址
	char* tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc;
		while (*fsrc == *tdest && *fsrc)
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == '\0')
		{
			return rsrc;
		}
		// 回滚
		tdest = dest; // 目标字符串更新到起始位置
		fsrc = rsrc + 1;
	}
	return NULL;
}
int main1701()
{
	char* str = "djsfkdsjdsjfsdfsdsjdjkhfsdkjhfjksdhfjsd";
	char ch[] = "dsj";
	char* p = my_strstr(str, ch);
	int count = 0; // 记录个数
	while (p)
	{
		count++;
		p = p + strlen(ch);
		p = my_strstr(p, ch);
	}
	printf("dsj 在字符串中出现：%d 次\n", count);
	return EXIT_SUCCESS;
}
int main17(void)
{
	char* str = "djsfkdsjdsjfsdfsdsjdjkhfsdkjhfjksdhfjsd";
	char ch[] = "dsj";
	char* p = my_strstr(str, ch);
	int count = 0; // 记录个数
	do
	{
		if (p)
		{
			count++;
			p = p + strlen(ch);
			p = my_strstr(p, ch);
		}
	} while (p);
	printf("dsj 在字符串中出现：%d 次\n", count);
	return EXIT_SUCCESS;
}