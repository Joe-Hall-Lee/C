#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main1001(void)
{
	FILE* fp = fopen("F:/CS/C/C/c.txt", "wb");
	if (fp == NULL)
	{
		return -1;
	}
	// int a = 5678;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	fwrite(arr, sizeof(arr), 10, fp);
	return 0;
}

int main10(void)
{
	FILE* fp = fopen("F:/CS/C/C/c.txt", "rb");
	if (fp == NULL)
	{
		return -1;
	}
	// int value = 0;
	// fread(&value, sizeof(int), 1, fp);

	int arr[10] = { 0 };

	fread(arr, sizeof(int), 10, fp);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	fclose(fp);
	return 0;
}