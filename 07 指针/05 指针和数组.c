#include <stdio.h>
#include <stdlib.h>

int main501()
{
	int arr[] = { 123456, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ��������һ��������������ֵ
	// ��������������Ԫ�ص�ַ
	// arr = 100;  // err
	int* p;
	p = arr;
	// printf("%p\n", p);
	// printf("%p\n", arr);
	*p = 123;
	// p++;
	printf("%p\n", arr);
	printf("%p\n", p);
	// printf("%d\n", *p);
	for (int i = 0; i < 10; i++)
	{
		// printf("%d\n", arr[i]);
		// printf("%d\n", p[i]);
		// printf("%d\n", *(p + i));
		printf("%d\n", *p++);
	}
	// printf("%p\n", arr);
	// printf("&p\n", p);

	// ����ָ��������õ��Ľ��������ָ���ƫ������������
	// ���е�ָ�����ͣ�����������int����
	int step = p - arr;

	printf("%d\n", step);
	return EXIT_SUCCESS;
}

int main502(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ָ�������ָ��
	int* p = arr;

	// p�Ǳ�����arr�ǳ���
	// p��һ��ָ�룬4���ֽڴ�С
	// arr��һ�����飬40���ֽڴ�С
	printf("ָ�����ʹ�С��%d\n", sizeof(p));
	printf("�����С��%d\n", sizeof(arr));
	// p[i];
	// *(p + i);
	return 0;
}

// ������Ϊ�����������˻�Ϊָ�룬��ʧ����ľ���
void BubbleSort(int* src, int len)
{
	// int len = sizeof(src) / sizeof(src[0]);
	// printf("%d\n", sizeof(src));
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//if (src[j] > src[j + 1])
			//{
			//	int temp = src[j];
			//	src[j] = src[j + 1];
			//	src[j + 1] = temp;
			//}
			if (*(src + j) > *(src + j + 1))
			{
				int temp = *(src + j);
				*(src + j) = *(src + j + 1);
				*(src + j + 1) = temp;
			}
		}
	}
}
int main5(void)
{
	int arr[] = { 9, 1, 5, 6, 3, 8, 10, 2, 7, 4 };
	BubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}