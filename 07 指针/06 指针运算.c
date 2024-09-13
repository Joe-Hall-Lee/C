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
		dest++; // 指针 + 1 相当于指向数组下一个元素
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
	// 字符串拷贝
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
	// arr[-1]; // 数组下标越界
	p = &arr[3];

	// printf("%p\n", p);
	// p--; // 指针的加减运算和指针的类型有关
	// p--;
	// p--;
	// 内存地址相差 12 / sizeof(int) = 偏移量
	int step = p - arr;
	// printf("%d\n", step);
	// 指针操作数组时下标允许是负数
	printf("%d\n", p[-2]); // *(p - 2)
	// printf("%p\n", p);
	// printf("%p\n", arr);
	return 0;
}

int main6(void)
{
	// 指针和运算符的操作
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	p = &arr[3];
	// 野指针
	// p = p  + arr; // err
	// p = p + arr; // err
	// p = p * 4; // err
	// p = p / arr;
	// int len = p % 4;
	// if (p > arr)
	// {
	//     printf("真\n");
	// }
	// if (p && arr)
	// {
	// }
	return 0;
}