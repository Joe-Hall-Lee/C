#include <stdio.h>
#include <stdlib.h>

void my_strcpy01(char* dest, char* ch)
{
	int i = 0;
	// while (ch[i] != '\0');
	// while (ch[i] != 0);
	while (ch[i])
	{
		dest[i] = ch[i];
		i++;
	}
	dest[i] = 0;
}
void my_strcpy02(char* dest, char* ch)
{
	int i = 0;
	while (*(ch + i))
	{
		*(dest + i) = *(ch + i);
		i++;
	}
	*(dest + i) = 0;
}
void my_strcpy03(char* dest, char* ch)
{
	int i = 0;
	while (*(ch + i))
	{
		*(dest + i) = *(ch + i);
		i++;
	}
	*(dest + i) = 0;
}
void my_strcpy04(char* dest, char* ch)
{
	while (*ch)
	{
		*dest = *ch;
		dest++; // ָ�� + 1 �൱��ָ��������һ��Ԫ��
		ch++;
	}
	*dest = 0;
}
void my_strcpy05(char* dest, char* ch)
{
	while (*dest++ = *ch++);
}
int main601(void)
{
	// �ַ�������
	char ch[] = "Hello World!";
	char dest[100];
	my_strcpy05(dest, ch);
	printf("%s\n", dest);
	return 0;
}
int main602(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	// char* p = arr;
	int* p = arr;
	// arr[-1]; // �����±�Խ��
	p = &arr[3];

	// printf("%p\n", p);
	// p--; // ָ��ļӼ������ָ��������й�
	// p--;
	// p--;
	// �ڴ��ַ��� 12 / sizeof(int) = ƫ����
	int step = p - arr;
	// printf("%d\n", step);
	// ָ���������ʱ�±������Ǹ���
	printf("%d\n", p[-2]); // *(p - 2)
	// printf("%p\n", p);
	// printf("%p\n", arr);
	return 0;
}

int main6(void)
{
	// ָ���������Ĳ���
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	p = &arr[3];
	// Ұָ��
	// p = p  + arr; // err
	// p = p + arr; // err
	// p = p * 4; // err
	// p = p / arr;
	// int len = p % 4;
	// if (p > arr)
	// {
	//     printf("��\n");
	// }
	// if (p && arr)
	// {
	// }
	return 0;
}