#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main5(void)
{
	int arr[] = { 9, 1, 5, 7, 2, 10, 8, 6, 4, 3 };

	// ��������
	// ���ִ��Ԫ�ظ��� - 1 ��
	for (int i = 0; i < 10 - 1; i++)
	{
		// �ڲ������
		// �ڲ�ִ��Ԫ�ظ��� - 1 ��
		for (int j = 0; j < 10 - i - 1; j++)
		{
			// �Ƚ�����Ԫ�أ�������������
			// ͨ�����ſ�������ķ�ʽ
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}