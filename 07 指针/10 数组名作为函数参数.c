#include <stdio.h>
#include <stdlib.h>

void my_strcat01(char* ch1, char* ch2)
{
	int i = 0;
	while (ch1[i] != '\0')
	{
		i++;
	}
	int j = 0;
	while (ch2[j] != '\0')
	{
		ch1[i + j] = ch2[j];
		j++;
	}
	ch1[i + j] = 0;
}
void my_strcat02(char* ch1, char* ch2)
{
	int i = 0;
	while (*(ch1 + i) != '\0')
	{
		i++;
	}
	int j = 0;
	while (*(ch2 + j) != '\0')
	{
		*(ch1 + i + j) = *(ch2 + j);
		j++;
	}
}
void my_strcat03(char* ch1, char* ch2)
{
	while (*ch1)ch1++;
	while (*ch2)
	{
		*ch1 = *ch2;
		ch1++;
		ch2++;
	}
}
void my_strcat04(char* ch1, char* ch2)
{
	while (*ch1)ch1++;
	while (*ch1++ = *ch2++);
}
int main1001(void)
{
	char ch1[100] = "hello";
	char ch2[] = "world";
	my_strcat04(ch1, ch2);
	printf("%s\n", ch1);

	return 0;
}

void remove_space01(char* ch)
{
	char str[100] = { 0 };
	char* temp = str;

	int i = 0;
	int j = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] != ' ')
		{
			str[j] = ch[i];
			j++;
		}
		i++;
	}

	while (*ch++ = *temp++);
}
void remove_space(char* ch)
{
	// 用来遍历字符串
	char* ftemp = ch;
	// 记录非空格字符串
	char* rtemp = ch;
	while (*ftemp)
	{
		if (*ftemp != ' ')
		{
			*rtemp = *ftemp;
			rtemp++;
		}
		ftemp++;
	}
	*rtemp = 0;
}
int main10(void)
{
	char ch[] = "    h  e    ll o  w  o    r  l d     ";
	remove_space(ch);
	printf("%s\n", ch);
	return 0;
}