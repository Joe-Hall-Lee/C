#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1501()
{
	int value = remove("F:/CS/C/C/c.txt");
	if (value == 0)
	{
		printf("删除成功\n");
	}
	else
	{
		printf("删除失败\n");
	}
	return EXIT_SUCCESS;
}

int main15(void)
{
	// 重命名
	// int value = rename("F:/CS/C/C/a.txt", "F:/CS/C/C/abc.txt");
	// 移动文件，剪切
	int value = rename("F:/CS/C/C/a.txt", "F:/CS/C/C/10 文件操作/a.txt");
	if (value == 0)
	{
		printf("成功\n");
	}
	else
	{
		printf("失败\n");
	}
}