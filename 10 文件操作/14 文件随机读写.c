#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1401()
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	if (!fp)
		return -1;

	char arr[100];
	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	// 文件随机读写
	// fseek(fp, -8, SEEK_CUR);
	// memset(arr, 0, 100);
	// fgets(arr, 100, fp);
	// printf("%s", arr);
	// 从文件起始位置开始偏移
	fseek(fp, 11, SEEK_SET);

	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	fseek(fp, -17, SEEK_END);
	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	return EXIT_SUCCESS;
}
int main1402(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r+");
	if (!fp)
		return -1;
	long pos = ftell(fp);

	printf("%ld\n", pos);
	fseek(fp, -17, SEEK_CUR);
	// fseek(fp, -19, SEEK_END);

	pos = ftell(fp);

	printf("%ld\n", pos);
	fputs("瞅你咋地\n", fp);

	fclose(fp);
	return 0;
}
int main1403(void)
{
	FILE* fp = fopen("F:/CS/C/C/b.txt", "w");
	if (!fp)
		return -1;
	char ch1[] = "hello 哈哈哈\n";
	char ch2[] = "world";

	fputs(ch1, fp);
	fseek(fp, -14, SEEK_CUR);
	fputs(ch2, fp);
	fclose(fp);
	return 0;
}

int main14(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");

	if (!fp)
	{
		return -1;
	}
	char arr[100];
	// 获取文件光标流所在位置
	long pos = ftell(fp);
	printf("%ld\n", pos);
	fgets(arr, 100, fp);
	fseek(fp, 8, SEEK_CUR);
	pos = ftell(fp);
	printf("%ld\n", pos);

	// 重置文件光标在起始位置
	rewind(fp); // fseek(fp, 0, SEEK_SET);
	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	return 0;
}