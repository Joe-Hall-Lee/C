#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// ��������
int my_strcmp(char ch1[], char ch2[])
{
	int i = 0;
	while (ch1[i] == ch2[i])
	{
		// �Ƿ��ַ�����β
		if (ch1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return ch1[i] > ch2[i] ? 1 : -1;
}
int main3(void)
{
	// �Ƚ������ַ����������ͬ���� 0�������ͬ���� 1 �� -1
	char ch1[] = "hello";
	char ch2[] = "hallo";

	int value = my_strcmp(ch1, ch2);
	if (value == 0)
	{
		printf("�����ַ�����ͬ");
	}
	else
	{
		printf("�����ַ�������ͬ");
	}
	return 0;
}