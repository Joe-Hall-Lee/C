#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main901()
{
	// ջ����С 1M
	// int arr[210000] = { 0 };

	// ���ٶѿռ�洢����
	int* p = (int*)malloc(sizeof(int));
	printf("%p\n", p);
	// ʹ�öѿռ�
	*p = 123;
	printf("%d\n", *p);
	// �ͷŶѿռ�
	free(p);
	// p Ұָ��
	// printf("%p\n", p);
	// *p = 456;
	printf("%d\n", *p);
	return EXIT_SUCCESS;
}
int main9(void)
{
	// int* p = (int*)malloc(sizeof(int) * 820000 * 66);
	// printf("%p\n", p);
	// free(p);
	int* p = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	free(p);
	// if (!p)
	// {
	//     printf("�����쳣\n");
	//     return -1;
	// }
	return EXIT_SUCCESS;
}