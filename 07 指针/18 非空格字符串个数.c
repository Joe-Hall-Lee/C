#include <stdio.h>
#include <stdlib.h>

int getstrcount01(char* ch) {
	int i = 0;
	int count = 0;
	while (ch[i]) {
		if (ch[i] != ' ') {
			count++;
		}
		i++;
	}
	return count;
}
int getstrcount(char* ch) {
	int count = 0;
	while (*ch) {
		if (*ch != ' ') {
			count++;
		}
		ch++;
	}
	return count;
}

int main1801(void) {
	char ch[] = "  hello world   ";
	int len = getstrcount(ch);
	printf("%d\n", len);

	return 0;
}

int main18(void)
{
	// ͳ���ַ������ִ���
	char ch[] = "jfhdsfsddfzdfsdfdshjkdshfjdskhfasd"; // 97, 97 + 26
	// �洢�ַ������ִ���
	char arr[26] = { 0 };
	for (int i = 0; i < strlen(ch); i++)
	{
		arr[ch[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0)
			printf("��ĸ %c ������ %d ��\n", i + 'a', arr[i]);
	}
	return 0;
}