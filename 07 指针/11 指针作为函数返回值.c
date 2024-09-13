#include <stdio.h>
#include <stdlib.h>

char* my_strchr01(char* str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			return &str[i];
		}
		i++;
	}

	return NULL;
}
char* my_strchr02(char* str, char ch)
{
	while (*str)
	{
		if (*str == ch)
		{
			return str;
		}
		str++;
	}

	return NULL;
}
int main11(void)
{
	char ch[] = "hello world";
	char* p = my_strchr02(ch, 'l');
	if (p == NULL)
	{
		printf("Œ¥’“µΩ\n");
	}
	else
	{
		printf("%s\n", p);
	}

	return 0;
}