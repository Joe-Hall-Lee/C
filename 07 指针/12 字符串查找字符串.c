#include <stdio.h>
#include <stdlib.h>

char* my_strstr01(char* src, char* dest)
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
int main12(void)
{
	char src[] = "hello worllod";
	char dest[] = "llo";

	char* p = my_strstr01(src, dest);
	printf("%s\n", p);
	p = p + 3;
	p = my_strstr01(p, dest);
	printf("%s\n", p);
	return 0;
}