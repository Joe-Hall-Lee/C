#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main301(void)
{
	FILE* fp1 = fopen("F:/CS/C/C/����.txt", "r");
	FILE* fp2 = fopen("F:/CS/C/C/����.txt", "w");
	if (!fp1 || !fp2)
	{
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		// ����
		ch++;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
int main3(void)
{
	FILE* fp1 = fopen("F:/CS/C/C/����.txt", "r");
	FILE* fp2 = fopen("F:/CS/C/C/�����ļ�.txt", "w");

	if (!fp1 || !fp2)
	{
		return -1;
	}
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		// ����
		ch--;
		fputc(ch, fp2);
	}
}