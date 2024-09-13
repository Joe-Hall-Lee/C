#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 函数可以调用自己，成为递归函数
void BubbleSort(int*, int);

int main601()
{
	int arr[] = { 5, 2, 7, 3, 4, 6, 8, 9, 10, 1 };
	// 全局函数的名称是作用域中唯一的
	// 作用域：在整个项目中所有文件中使用
	// 生命周期：从程序创建到程序销毁
	BubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return EXIT_SUCCESS;
}

void fun07();
// 静态函数
// 静态函数可以和全局函数重名
// 作用域：当前文件中

static void fun07()
{
	printf("hello world1\n");
}
int main6(void)
{
	fun07();
}