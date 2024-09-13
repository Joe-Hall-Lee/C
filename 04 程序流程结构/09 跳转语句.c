#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main901(void)
{
	for (int i = 1; i < 10; i++)
	{
		if (i == 5)
			break;
		for (int j = 1; j < 10; j++)
		{
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}
int main902(void)
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 2 == 1)
			continue;
		printf("%d\n", i);
	}
	return 0;
}

int main903(void)
{
	printf("hello world1\n");
	printf("hello world2\n");
	goto FLAG;
	printf("hello world3\n");
	printf("hello world4\n");
	return 0;
FLAG:
	printf("hello world5\n");
	printf("hello world6\n");
	return 1;
}

int main904(void)
{
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			goto FLAG;
		printf("i = %d\n", i);
	}
	for (j = 0; j < 10; j++)
	{
	FLAG:
		printf("j = %d\n", j);
	}
	return 0;
}

int main(void)
{
FLAG:
	printf("hello world\n");
	if (1)
		return 0;
	goto FLAG;
	return 0;
}