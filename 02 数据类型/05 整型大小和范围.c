#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main5()
{
	//���ͱ���
	int a = 10;
	//�����ͱ���
	short b = 20;

	//�����ͱ���
	long c = 30;
	//�������ͱ���
	long long d = 40;

	//short<=int<=long<long long
	printf("%d\n", a);
	//ռλ������ʾ���һ������������
	printf("%hd\n", b);
	//ռλ������ʾ���һ������������
	printf("%ld\n", c);
	//ռλ������ʾ���һ��������������
	printf("%lld\n", d);

	//sizeof:���������������ڴ���ռ���ֽ�(BYTE)��С
	//1B = 8bit
	//sizeof(��������)��sizeof(������)��sizeof ������
	unsigned int len = sizeof(short);

	//printf("%d\n", len);
	printf("���ͣ�%d\n", sizeof(a));  //4 = 32bit
	printf("�����ͣ�%d\n", sizeof(b));  //2
	printf("�����ͣ�%d\n", sizeof(c));  //4
	printf("�������ͣ�%d\n", sizeof(d));  //8

	return EXIT_SUCCESS;
}