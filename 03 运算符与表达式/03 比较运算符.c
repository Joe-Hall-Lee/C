#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main3()
{
	int a = 10;
	int b = 20;
	int c = 10;
	// printf("%d\n", a != b);
	// �Ƚ����������ֵΪ 0 ���� 1����ʾ����
	printf("%d\n", c = ++a <= b * 2);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return EXIT_SUCCESS;
}