#include <stdio.h>
#include <stdlib.h>

int my_strlen01(char* ch)
{
	// 计算字符串有效长度
	int i = 0;
	while (ch[i])i++;

	return i;
}

int my_strlen(const char* ch)
{
	if (ch == NULL)return 0;
	char* temp = ch;
	while (*temp)temp++;

	return temp - ch;
}
int main14(void)
{
	char ch[] = "Hello, World!";
	// printf("%s\n", ch);
	int len = my_strlen(ch);
	printf("%d\n", len);
	return 0;
}