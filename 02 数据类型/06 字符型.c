#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main601()
{
	//�ַ��ͱ���
	char ch = '0';

	//��ӡ�ַ��ͱ���
	printf("%c\n", ch);
	//��ӡ��ĸ a ��Ӧʮ������
	printf("%d\n", ch);
	//unsigned int len = sizeof(ch);
	printf("�ַ��ʹ�С��%d\n", sizeof(ch));
	return EXIT_SUCCESS;
}

int main602(void)
{
	//char ch1 = 'a';
	//char ch2 = 'A';
	//printf("%d\n", ch1 - ch2);
	char ch;
	scanf("%c", &ch);

	printf("%c\n", ch - 32);
	printf("\"���ɶ\"");
	//��ӡ%��Ҫʹ��%%
	printf("30%%");
	return 0;
}