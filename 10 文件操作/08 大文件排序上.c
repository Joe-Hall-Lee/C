#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main8(void)
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("F:/CS/C/C/����.txt", "w");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return 0;
	}
	for (int i = 0; i < 1000; i++)
	{
		fprintf(fp, "%d\n", rand() % 256);
	}
	fclose(fp);
	return 0;
}