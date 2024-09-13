#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

int main13()
{
	// 文件状态结构体变量
	struct stat st;
	stat("F:/CS/C/C/copy.exe", &st);

	printf("文件大小：%d\n", st.st_size);

	return 0;
}