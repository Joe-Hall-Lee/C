#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2501(void)
{
	// �ַ�����ȡ strtok ���ƻ�Դ�ַ������� \0 �滻�ָ�ı�־λ
	char ch[] = "www.itcast.cn"; // 123456@qq.com
	// www\0itcast.cn
	// www\0itcast\0cn
	char* p = strtok(ch, ".");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	// printf("%s\n", ch);
	// printf("%p\n", p);
	// printf("%p\n", ch);

	return 0;
}

int main2502(void)
{
	char ch[] = "123456@qq.com";
	char str[100] = { 0 };
	// �ַ�������
	strcpy(str, ch);

	char* p = strtok(ch, "@");
	printf("%s\n", p);
	p = strtok(NULL, ".");
	printf("%s\n", p);
	return 0;
}

int main25(void)
{
	// char ch[] = "sfjldfsldhf\nsfsdfsdf\nsfsdfsdfs\ngfsdfd\nsfsdfsd";
	char ch[] = "���ɶ\n����զ��\n���ٳ�һ������\n���Բ���\n��̱";
	char* p = strtok(ch, "\n");
	while (p)
	{
		printf("%s\n", p);
		p = strtok(NULL, "\n");
	}
	return 0;
}