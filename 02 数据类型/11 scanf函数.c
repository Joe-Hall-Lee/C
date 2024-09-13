#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main1101()
{
	// char ch;
	int a = 10, b = 20;
	// scanf("%c", &ch);
	scanf("%3d%d", &a, &b);
	// putchar(ch);
	printf("%d\t%d", a, b);

	return EXIT_SUCCESS;
}

int main(void)
{
	char ch;
	ch = getchar();
	putchar(ch);
	// ‘› ±Õ£¡ÙΩÁ√Ê
	getchar();
	return 0;
}
