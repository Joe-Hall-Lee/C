#include <stdio.h>
#include <stdlib.h>

int main1301(void)
{
	// char ch[] = "Hello World!";
	// char* p = ch;

	// printf("%s\n", p);
	// printf("%c\n", *(p + 1));
	char* p = "Hello World!"; // ջ���ַ���
	char ch[] = "Hello World!"; // �������������ַ���
	char* p1 = "Hello World!";
	printf("%s\n", p);
	printf("%s\n", p1);

	// ch[2] = 'm';
	// p[2] = 'm'; // err
	*(p + 2) = 'm'; // err
	printf("%s\n", ch);
	printf("%s\n", p);
	return 0;
}

int main13(void)
{
	// �ַ�������
	// ָ������
	// char ch1[] = "hello";
	// char ch2[] = "world";
	// char ch3[] = "dabaobei";
	// char* arr[] = { ch1, ch2, ch3 };
	// �ַ�������
	char* arr[] = { "hello", "world", "dabaobei" };
	// arr[0] arr[1] arr[2]
	// for (int i = 0; i < 3; i++)
	// {
	//     printf("%s\n", arr[i]);
	// }

	// �ַ�������
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - 1 - i; j++)
		{
			// �����ַ����бȽ�
			if (arr[j][0] > arr[j + 1][0])
			{
				// ����ָ������Ԫ�ؽ�������
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
}