#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main2()
{
	int a, b, c;
	printf("��������ֻС�����أ�\n");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		// a ���� b
		if (a > c)
		{
			// a ���� c
			printf("С�� a ����\n");
		}
		else
		{
			printf("С�� c ����\n");
		}
	}
	else
	{
		if (b > c)
		{
			printf("С�� b ����\n");
		}
		else
		{
			printf("С�� c ����\n");
		}
	}
	return EXIT_SUCCESS;
}