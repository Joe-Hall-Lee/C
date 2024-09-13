#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main401()
{
	// ����
	const int a = 10;
	// a = 100;  // err
	// ָ�����޸ĳ�����ֵ

	int* p = &a;
	*p = 100;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}

int main402(void)
{
	int a = 10;
	int b = 20;
	const int* p = &a;

	// p = &b;  // ok
	// *p = 100;  // err
	printf("%d\n", *p);
	return 0;
}

int main403(void)
{
	int a = 10;
	int b = 20;
	int* const p = &a;
	// p = &b;  // err
	*p = 200;

	printf("%d\n", a);
	return 0;
}

int main4(void)
{
	int a = 10;
	int b = 20;
	// const ����ָ�����ͣ�����ָ�����
	const int* const p = &a;

	// ����ָ�����
	int** pp = &p;
	// *pp = &b;
	**pp = 100;

	printf("%d\n", *p);
	// p = &b;  // err
	// *p = 100;  // err
	return 0;
}