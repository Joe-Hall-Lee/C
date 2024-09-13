#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	// int arr[5][3];
	int** p = (int**)malloc(sizeof(int*) * 5);

	for (int i = 0; i < 5; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * 3);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		free(p[i]);
	}
	free(p);
	return 0;
}