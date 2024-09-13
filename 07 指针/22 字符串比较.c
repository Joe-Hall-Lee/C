#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp01(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 > *s2 ? 1 : -1;
}
int my_strncmp(const char* s1, const char* s2, size_t n)
{
	for (int i = 0; i < n && s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] > s2[i] ? 1 : -1;
		}
	}
	return 0;
}

// int my_strcmp(const char* s1, const char* s2)
// {
//     while (*s1 && *s1 == *s2) {
//	   s1++;
//     s2++;
// }
//     return *s1 - *s2;
// }
int main22(void)
{
	char ch1[] = "hello world";
	char ch2[] = "hello world";
	// int value = strcmp(ch1, ch2);
	// int value = strncmp(ch1, ch2, 5);
	// int value = my_strcmp(ch1, ch2);
	// int value = my_strncmp(ch1, ch2, 3);
	// printf("%d\n", value);
	if (!strcmp(ch1, ch2))
	{
		printf("相同\n");
	}
	else
	{
		printf("不相同\n");
	}
	system("pause");
	return 0;
}