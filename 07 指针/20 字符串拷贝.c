#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char* dest, const char* src)
{
	while (*dest = *src++);
}
void my_strncpy06(char* dest, const char* src, size_t n)
{
	while ((*dest++ = *src++) && --n);
}
void my_strncpy01(char* dest, const char* src, size_t n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}
void my_strncpy02(char* dest, const char* src, size_t n)
{
	int i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
}
void my_strncpy(char* dest, const char* src, size_t n)
{
	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
}
int main20(void)
{
	char ch[] = "abcbdcba";

	char str[100] = { 0 };
	// my_strcpy(str, ch);
	// ×Ö·û´®¿½±´
	// strcpy(str, ch);
	// ×Ö·û´®ÓÐÏÞ¿½±´
	// strncpy(str, ch, 50);
	my_strncpy(str, ch, 5);
	printf("%s\n", str);
	return 0;
}