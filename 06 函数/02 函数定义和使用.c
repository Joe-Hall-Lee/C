#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// ����ֵ���� ������ (�����б�)
// {
//     ������
//     return 0;
// }
int add(int a, int b)
{
	// int sum = a + b;
	// return sum;
	return a + b;
}
void print()
{
	printf("hello world\n");
}
int main201(void)
{
	int a = 10;
	int b = 20;
	int c;
	// ��������
	c = add(a, b);
	printf("%d\n", c);

	print();
	return 0;
}
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main2(void)
{
	int a = 10;
	int b = 20;
	printf("����ǰ���ݣ�\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	// ��������
	swap(a, b);
	printf("���������ݣ�\n");

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}