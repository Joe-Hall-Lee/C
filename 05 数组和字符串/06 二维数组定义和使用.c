#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main601(void)
{
	// �������� ������[Ԫ�ظ���] = { ֵ 1, ֵ 2 };
	// �������� ������[��][��] = { { ֵ 1, ֵ 2 }, { ֵ 3, ֵ 4 }};
	// {
	//     { ֵ 1, ֵ 2},
	// 	   { ֵ 3, ֵ 4}
	// };
	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	// {
	//     { 1, 2, 3},
	// 	   { 4, 5, 6}
	// };
	// int arr[2][3] = 20;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("��ά�����С��%d\n", sizeof(arr)); // �� * �� * sizeof(��������)
	printf("��ά����һ�д�С��%d\n", sizeof(arr[0]));
	printf("��ά����Ԫ�ش�С��%d\n", sizeof(arr[0][0]));

	printf("��ά����������%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("��ά����������%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	return 0;
}

int main602(void)
{
	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", &arr[i][j]);
		}
		printf("\n");
	}
	// ��ά�����׵�ַ
	printf("%p\n", arr);
	// arr[0] = 100; // err
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);
	printf("%p\n", &arr[0][1]);

	// printf("%p\n", arr[1]);

	return 0;
}
int main6(void)
{
	// ��ά�����ʼ��
	// int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	// int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	// int arr[][3] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr[][3] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}