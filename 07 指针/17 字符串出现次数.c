#include <stdio.h>
#include <stdlib.h>
char* my_strstr(char* src, char* dest)
{
	char* fsrc = src; // ����Դ�ַ���ָ��
	char* rsrc = src; // ��¼ÿ���ַ����׵�ַ
	char* tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc;
		while (*fsrc == *tdest && *fsrc)
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == '\0')
		{
			return rsrc;
		}
		// �ع�
		tdest = dest; // Ŀ���ַ������µ���ʼλ��
		fsrc = rsrc + 1;
	}
	return NULL;
}
int main1701()
{
	char* str = "djsfkdsjdsjfsdfsdsjdjkhfsdkjhfjksdhfjsd";
	char ch[] = "dsj";
	char* p = my_strstr(str, ch);
	int count = 0; // ��¼����
	while (p)
	{
		count++;
		p = p + strlen(ch);
		p = my_strstr(p, ch);
	}
	printf("dsj ���ַ����г��֣�%d ��\n", count);
	return EXIT_SUCCESS;
}
int main17(void)
{
	char* str = "djsfkdsjdsjfsdfsdsjdjkhfsdkjhfjksdhfjsd";
	char ch[] = "dsj";
	char* p = my_strstr(str, ch);
	int count = 0; // ��¼����
	do
	{
		if (p)
		{
			count++;
			p = p + strlen(ch);
			p = my_strstr(p, ch);
		}
	} while (p);
	printf("dsj ���ַ����г��֣�%d ��\n", count);
	return EXIT_SUCCESS;
}