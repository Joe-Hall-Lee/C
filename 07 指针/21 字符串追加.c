#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcat(char* dest, const char* src)
{
	// �ҵ� dest �ַ����� \0 λ��
	while (*dest)dest++;
	while (*dest++ = *src++);
}
void my_strncat(char* dest, const char* src, size_t n)
{
	while (*dest)dest++;
	while ((*dest++ = *src++) && --n);
}
int main21(void)
{
	char dest[100] = "hello";
	char src[] = "world";

	// �ַ���׷��
	// strcat(dest, src);
	// �ַ�������׷��
	// strcat(dest, src, 30);
	// my_strcat(dest, src);
	printf("%s\n", dest);
	my_strncat(dest, src, 3);
	return 0;
}