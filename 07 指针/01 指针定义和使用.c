#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main101()
{
	int a = 0xaabbccdd;
	// a = 100;

	printf("%p\n", &a);
	getchar();
	return EXIT_SUCCESS;
}

int main102(void)
{
	// ����ָ������洢������ַ
	int a = 10;
	// ָ�����ͣ���������*
	int* p;
	p = &a;
	// ͨ��ָ�����ı������ֵ
	*p = 100;
	printf("%p\n", &a);
	printf("%p\n", p);

	printf("%d\n", a);
	printf("%d\n", *p);
	return 0;
}

int main103(void)
{
	// char ch = 'm';
	// char* p = &ch;

	int a = 10;
	// int* p = &a;
	// & ��ȡ��ַ���ţ�����ά�ȵ�
	// * ��ȡֵ���ţ��ǽ�ά�ȵ�
	int* p = &a;
	*p = 100;
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}

int main104()
{
	char ch = 97;
	int* p = &ch;
	// *p = 123456;
	printf("%d\n", ch);
	printf("%d\n", *p);
	// printf("%p\n", p);
	// printf("%p\n", &ch);
	return 0;
}