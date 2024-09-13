#include <stdio.h>
#include <stdlib.h>

int main1()
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	// 1. 找不到文件
	// 2. 文件权限（读、写、执行）
	// 3. 程序打开文件超出上限 65535
	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	printf("打开文件成功：%p\n", fp);

	fclose(fp);
	return 0;
}