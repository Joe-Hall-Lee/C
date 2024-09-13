#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#define SIZE (1024*1024*8)

int main12(int argc, char* argv[])
{
	for (int i = 0; i < argv; i++)
	{
		printf("%s\n", argv[i]);
	}

	// 用户输入参数缺少
	if (argc < 3)
	{
		printf("缺少参数\n");
		return -1;
	}

	// F:/CS/C/C/copy.exe "F:/CS/C/C/test.avi" "F:/CS/C/C/10 文件操作/test.avi"
	// argv[0] 程序名称 文件大小是 50M
	FILE* fp1 = fopen(argv[1], "rb");
	FILE* fp2 = fopen(argv[2], "wb");

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("打开文件失败\n");
		return -2;
	}

	char* temp = NULL;
	int size = 0;
	struct stat st;
	stat(argv[1], &st);
	// 根据文件实际大小开辟空间
	if (st.st_size > SIZE)
	{
		temp = (char*)malloc(sizeof(char) * SIZE);
		size = SIZE;
	}
	else
	{
		temp = (char*)malloc(sizeof(char) * st.st_size + 10);
		size = st.st_size + 10;
	}

	int count = 0;

	while (!feof(fp1))
	{
		memset(temp, 0, size);
		// count 为读取成功实际个数
		count = fread(temp, sizeof(char), SIZE, fp1);
		fwrite(temp, sizeof(char), count, fp2);
	}
	free(temp);
	fclose(fp1);
	fclose(fp2);
	return 0;
}