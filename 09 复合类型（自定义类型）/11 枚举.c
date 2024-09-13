#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

enum Color
{
	red = 10, blue, green, yellow = 20, black, white
};
int main11(void)
{
	int value;
	scanf("%d", &value);

	switch (value)
	{
	case red:
		printf("red\n");
		break;
	case blue:
		printf("blue\n");
		break;
	case green:
		printf("green\n");
		break;
	case yellow:
		printf("yellow\n");
		break;
	case black:
		printf("black\n");
		break;
	case white:
		printf("white\n");
		break;
	default:
		printf("error\n");
	}

	return EXIT_SUCCESS;
}