#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main401(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	if (!fp)
	{
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 1024);
	memset(p, 0, 5);

	fgets(p, 5, fp);
	printf("%s\n", p);
	memset(p, 0, 5);

	fgets(p, 5, fp);
	printf("%s\n", p);
	free(p);
	fclose(fp);
	return 0;
}

int main402(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	if (!fp)
	{
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);

	// feof(文件指针) 判断文件是否到结尾，可以判断文本文件也可以判断二进制文件
	// 如果到文件结尾返回值为非 0 的值
	// 如果没到文件结尾返回值为 0
	while (!feof(fp))
	{
		memset(p, 0, 100);
		fgets(p, 100, fp);

		printf("%s", p);
	}
	return 0;
}

int main403(void)
{
	FILE* fp = fopen("F:/CS/C/C/b.txt", "w");
	if (!fp)
		return -1;
	char ch[] = "你瞅啥\0瞅你咋地";
	fputs(ch, fp);
	fclose(fp);
	return 0;
}

int main404(void)
{
	FILE* fp = fopen("F:/CS/C/C/b.txt", "r");
	if (!fp)
		return -1;
	char* p = (char*)malloc(sizeof(char) * 1024);
	while (1)
	{
		memset(p, 0, 1024);
		// scanf("%s", p);
		scanf("%[^\n]", p);
		// fgets()
		// 吞噬回车 \n
		getchar();

		// 追加 \n

		// 停止输入命令 comm=exit
		if (!strcmp(p, "comm=exit"), 9)
			break;
		strcat(p, "\n");

		fputs(p, fp);
	}
	free(p);
	fclose(fp);
}

// 10 + 2
// 值 运算符 值 = \n sprintf