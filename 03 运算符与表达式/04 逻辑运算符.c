#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main401()
{
	// // ���з� 0 ��ֵ������ֵ
	// // ! �ǣ�����Ϊ�٣��Ǽ�Ϊ��
	// int a = 123;
	// printf("%d\n", !a);
	// int a = 10;
	// int b = 20;

	// // ��Ŀ���������˫Ŀ�����
	// // && �룺ͬ��Ϊ�棬����Ϊ��
	// printf("%d\n", !a && b);

	int a = 10;
	int b = 0;
	// ||��ͬ��Ϊ�٣�����Ϊ��
	printf("%d\n", a || b);
	return 0;
}

int main402()
{
	int a = 10;
	int b = 20;
	int c = b = 30;
	printf("%d\n", c);
	return 0;
}