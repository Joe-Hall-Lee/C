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

	// �ļ������д
	// fseek(fp, -8, SEEK_CUR);
	// memset(arr, 0, 100);
	// fgets(arr, 100, fp);
	// printf("%s", arr);
	// ���ļ���ʼλ�ÿ�ʼƫ��
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
	fputs("����զ��\n", fp);

	fclose(fp);
	return 0;
}
int main1403(void)
{
	FILE* fp = fopen("F:/CS/C/C/b.txt", "w");
	if (!fp)
		return -1;
	char ch1[] = "hello ������\n";
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
	// ��ȡ�ļ����������λ��
	long pos = ftell(fp);
	printf("%ld\n", pos);
	fgets(arr, 100, fp);
	fseek(fp, 8, SEEK_CUR);
	pos = ftell(fp);
	printf("%ld\n", pos);

	// �����ļ��������ʼλ��
	rewind(fp); // fseek(fp, 0, SEEK_SET);
	memset(arr, 0, 100);
	fgets(arr, 100, fp);
	printf("%s", arr);

	return 0;
}