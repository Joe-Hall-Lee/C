#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// ��������
// extern int add01(int a, int b);
// int add01(int a, int b);
int add01(int, int);
// extern int add(int a, int b);
// ��������
// ��������

int main5(void)
{
	int a = add01(10, 20);
	printf("%d\n", a);
	return 0;
}
// �������壬ֻ�ܶ���һ��
int add01(int a, int b)
{
	return a + b;
}