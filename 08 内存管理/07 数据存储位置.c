#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// ��ȫ�ĳ������洢����δ������������
const int abc = 10;
// δ��ʼ��ȫ�ֱ���
int a1;
// ��ʼ��ȫ�ֱ���
int b1 = 10;
// δ��ʼ����̬ȫ�ֱ���
static int c1;
// ��ʼ����̬ȫ�ֱ���
static int d1 = 20;
int main7()
{
	int e1 = 10;
	// δ��ʼ���ľֲ�����
	static int f1;
	// ��ʼ���ľֲ�����
	static int h1 = 10;

	// �ַ�������
	char* p = "hello world";
	int arr[] = { 1, 2, 3, 4, 5 };
	// ָ��
	int* pp = arr;
	printf("δ��ʼ��ȫ�ֱ�����%p\n", &a1);
	printf("��ʼ��ȫ�ֱ�����%p\n", &b1);
	printf("δ��ʼ����̬ȫ�ֱ�����%p\n", &c1);
	printf("��ʼ����̬ȫ�ֱ�����%p\n", &d1);

	printf("�ֲ�����", &e1);
	printf("δ��ʼ���ľֲ�������%p\n", &f1);
	printf("��ʼ���ľֲ�������%p\n", &h1);
	printf("�ַ���������%p\n", p);
	printf("ָ�룺%p\n", pp);

	return EXIT_SUCCESS;
}