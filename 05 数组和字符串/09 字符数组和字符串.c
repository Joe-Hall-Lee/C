#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main901(void)
{
	// �����ַ�����
	// char arr[100] = { 110, 111, 112, 101, 123, 98, 99 };
	// char arr[] = { "hello" };
	// printf("%s\n", arr);
	// char arr[6] = { 'h', 'e', 'l', 'l', 'o' };
	// �ַ�
	// char ch = 'a';
	// �ַ������ַ���������־λ \0������ 0 ��ͬ�� \0�����ǲ���ͬ�� '0'
	// char * arr = "hello";
	// char arr[] = "hello";
	// char arr[] = { 'h', 'e', 'l', 'l', 'o', '\0' };

	// printf("%s\n", arr);
	// printf("%d\n", sizeof(arr)); // sizeof(��������)

	// for (int i = 0; i < sizeof(arr); i++)
	// {
	//     printf("%c ", arr[i]);
	// }
	return 0;
}

int main9()
{
	// �����ַ�����洢�ַ���
	char ch[11];

	scanf("%10s", ch);
	printf("%s\n", ch);

	return 0;
}

int main903(void)
{
	char ch1[] = "hello";
	char ch2[] = "world";
	char ch3[20];

	int i = 0;
	int j = 0;
	while (ch1[i] != '\0')
	{
		ch3[i] = ch1[i];
		i++;
	}

	while (ch2[j] != '\0')
	{
		ch3[i + j] = ch2[j];
		j++;
	}

	ch3[i + j] = '\0';
	printf("%s\n", ch3);

	return 0;
}