#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

enum opt
{
	add, sub, mul, dive
};

int main5(void)
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("F:/CS/C/C/Àƒ‘Ú‘ÀÀ„.txt", "w");
	if (fp == NULL)
	{
		return -1;
	}
	int a, b;
	char c; // + - * /

	char* p = (char*)malloc(sizeof(char) * 20);
	for (int i = 0; i < 100; i++)
	{
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		c = rand() % 4 + 1;

		switch (rand() % 4)
		{
		case add:
			c = '+';
			break;
		case sub:
			c = '-';
			break;
		case mul:
			c = '*';
			break;
		case dive:
			c = '/';
			break;
		}
		memset(p, 0, 20);
		sprintf(p, "%d %c %d = \n", a, c, b);
		fputs(p, fp);
	}
	free(p);
	fclose(fp);
	// p = NULL;
	// fp = NULL;
	return 0;
}