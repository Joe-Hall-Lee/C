#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"02 fun.h"

int main(void)
{
	// gcc -o hello.exe "01 main.c" "02 fun.c" "02 fun.h" head.h
	int a = 10;
	int b = 20;
	printf("%d\n", max(a, b));
	return 0;
}