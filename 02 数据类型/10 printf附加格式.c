#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main1001()
{
   	// int a = 12;
	float a = 3.14;
	// printf("===%5d===", a);
	printf("===%07.2f===", a);
	return EXIT_SUCCESS;
}

int main1002(void)
{
	char ch = 'a';

	// printf("%c\n", ch);

	// 输出字符，可以是变量、字符、数字、转义字符
	// putchar(ch);
	// putchar('B');
	// putchar(97);
	putchar('\n');

	return 0;
}
