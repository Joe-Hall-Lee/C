#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main101()
{
	// ��������
	// �������� ���� = ֵ
	//  ���鶨��
	// �������� ������[�����С] = { ֵ 1, ֵ 2, ֵ 3 }
	int arr[10] = { 9, 4, 2, 1, 8, 5, 3, 6, 10, 7 };

	// �����±꣺������[�±�]
	// �����±��Ǵ� 0 ��ʼ�ĵ�����Ԫ�ظ��� - 1
	// printf("%d\n", arr[0]);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return EXIT_SUCCESS;
}

int main102()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ����������
	arr[3] = arr[5];
	arr[2] = arr[3] * 2;

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

int main1(void)
{
	// �������ڴ��д洢��ʽ�ʹ�С
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// �±�Ϊ 0 ��Ԫ�ص�ַ
	// printf("%p\n", &arr[0]);
	// printf("%p\n", &arr[1]);
	// printf("%p\n", &arr[2]);
	// printf("%p\n", &arr[3]);
	// printf("%p\n", &arr[4]);
	// ��������һ����ַ����������ָ�������׵�ַ�ĳ���
	// printf("%p\n", arr);
	printf("�������ڴ���ռ�Ĵ�С��%d\n", sizeof(arr));
	printf("����Ԫ�ش�С��%d\n", sizeof(arr[0]));
	printf("����Ԫ�ظ�����%d\n", sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}