#include <stdio.h>
#include <stdlib.h>

int main201()
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");

	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char ch;
	// 文件的字符读取
	// 文件默认结尾为 -1
	ch = fgetc(fp);
	printf("%c\n", ch);
	// 不能修改文件指针，文件在读取时光标流会自动向下移动
	// fp++; // err
	ch = fgetc(fp);
	printf("%c\n", ch);
	// 关闭文件
	fclose(fp);
	return 0;
}

int main2(void)
{
	// FILE* fp = fopen("F:/CS/C/C/a.txt", "w");
	FILE* fp = fopen("F:/CS/C/C/源文件.txt", "r");

	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char ch;
	while (ch = fgetc(stdin) != EOF)
	{
		printf("%c\n", ch);
	}
	fclose(fp);
}
int main202(void)
{
	// 以写的方式打开文件，如果文件不存在会创建一个新文件，如果文件存在，会清空内容
	FILE* fp = fopen("F:/CS/C/C/b.txt", "w");

	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char ch = 'a';
	// 字符写入
	fputc(ch, fp);
	fclose(fp);
	return 0;
}
int main(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.c", "w");

	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char ch = 'a';
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '