#include <stdio.h>
#include <stdlib.h>

int main701(void)
{
	// �������飺�������� ������[Ԫ�ظ���] = { ֵ 1, ֵ 2, ...};
	// ����ָ������
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };
	// arr[0] arr[1] arr[2]
	// printf("%d\n", *arr[0]);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", *arr[i]);
	}
	printf("ָ�������С��%d\n", sizeof(arr));
	printf("ָ������Ԫ�ش�С��%d\n", sizeof(arr[0]));
	return 0;
}

int main7(void)
{
	// ָ����������Ԫ�ش洢����ָ��
	int a[] = { 1, 2, 3 };
	int b[] = { 4, 5, 6 };
	int c[] = { 7, 8, 9 };
	// ָ��������һ������Ķ�ά����ģ��
	// ָ�������Ӧ�ڶ���ָ��

	int* arr[] = { a, b, c };
	// ָ������Ͷ���ָ�뽨����ϵ
	int** p = arr;

	// arr ��ָ��������׵�ַ
	// printf("%p\n", arr);
	// printf("%p\n", &arr[0]);
	// printf("%p\n", a);
	// printf("%d\n", arr[0][1]);
	// printf("%p\n", arr[0]);
	// printf("%p\n", a); // a[1]
	// printf("%p\n", &a[0]); // a[1]
	// for (int i = 0; i < 3; i++)
	// {
	//     printf("%d\n", *arr[i]);
	// }
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// ��ά����
			// printf("%d ", arr[i][j]);

			// printf("%d ", *(arr[i] + j));
			printf("%d ", *(*(arr + i) + j));
		}
		puts("");
	}
	return 0;
}