#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main1001(void)
{
	char ch[100] = "hello world";

	// ͨ�����̻�ȡһ���ַ���
	// gets �����ַ������Դ��ո�

	gets(ch);
	// ͨ��������ʽ����ȡ���ո��ַ���
	// scanf("%s[^\n]", ch);
	printf("%s\n", ch);
	return 0;
}

int main1002()
{
	char ch[10];
	// "hello\n\0"

	// fgets���Խ��տո�
	// fgets ��ȡ�ַ�������Ԫ�ظ������� \n�����ڵ���û�� \n
	fgets(ch, sizeof(ch), stdin);
	printf("%s", ch);
	return 0;
}

int main1003(void)
{
	char ch[] = "hello world";
	// puts �Դ�����
	// puts(ch);
	// puts("hello\0 world");
	puts("");
	return 0;
}

int main1004(void)
{
	char ch[] = "hello world";
	// fputs(ch, stdout);
	// printf("%s", ch);
	return 0;
}