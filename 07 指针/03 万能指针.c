#include <stdlib.h>
#include <stdio.h>

int main3()
{
	int a = 10;
	// int* p = &a;
	// ����ָ����Խ����������ͱ������ڴ��ַ
	void* p = &a;
	// ��ͨ������ָ���޸ı�����ֵʱ����Ҫ�ҵ�������Ӧ��ָ������
	*(int*)p = 100;
	printf("%d\n", a);
	printf("%d\n", *(int*)p);
	printf("����ָ�����ڴ�ռ���ֽڴ�С��%d\n", sizeof(void*));
	// printf("void ���ڴ�ռ���ֽڴ�С��%d\n", sizeof(void));
	return EXIT_SUCCESS;
}