#include <stdlib.h>
#include <stdio.h>

int main3()
{
	int a = 10;
	// int* p = &a;
	// 万能指针可以接收任意类型变量的内存地址
	void* p = &a;
	// 在通过万能指针修改变量的值时，需要找到变量对应的指针类型
	*(int*)p = 100;
	printf("%d\n", a);
	printf("%d\n", *(int*)p);
	printf("万能指针在内存占的字节大小：%d\n", sizeof(void*));
	// printf("void 在内存占的字节大小：%d\n", sizeof(void));
	return EXIT_SUCCESS;
}