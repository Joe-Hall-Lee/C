#include <stdio.h>
#include <stdlib.h>

void inverse01(char* ch)
{
	int i = 0;
	int j = strlen(ch) - 1;
	while (i < j)
	{
		char temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;
		i++;
		j--;
	}
	return;
}
void inverse(char* ch)
{
	char* ftemp = ch;
	char* btemp = ch + strlen(ch) - 1;
	// printf("%c\n", *btemp);
	while (ftemp < btemp)
	{
		char temp = *ftemp;
		*ftemp = *btemp;
		*btemp = temp;
		ftemp++;
		btemp--;
	}

	return;
}
int main1901(void)
{
	char ch[] = "abcddefg";
	inverse(ch);
	printf("%s\n", ch);
	return 0;
}

// 回文字符串
// abcba abccba abcdcba
int symm(char* ch)
{
	char* ftemp = ch;
	char* btemp = ch + strlen(ch) - 1;

	while (ftemp < btemp)
	{
		if (*ftemp != *btemp)
		{
			return 1;
		}
		ftemp++;
		btemp--;
	}
	return 0;
}
int main19(void)
{
	char ch[] = "abcbdcba";
	int value = symm(ch);
	if (!value)
	{
		printf("相同\n");
	}

	else
	{
		printf("不相同\n");
	}
	return 0;
}