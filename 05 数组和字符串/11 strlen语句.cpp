#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main1101(void)
{
	// �����ַ�����Ч����
	char ch[] = "hello world";
	printf("�����С��%d", sizeof(ch));
	printf("�ַ������ȣ�%d", strlen(ch));
	return 0;
}

int main(void)
{
	char ch[] = "hello world";
	int len = 0;
	while (ch[len] != '\0')
	{
		len++;
	}
	printf("�ַ������ȣ�%d", len);
	return 0;
}