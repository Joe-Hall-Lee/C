#include <stdio.h>
#include <stdlib.h>

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main9(void)
{
	int a = 10;
	int b = 20;
	// 值传递，形参不影响实参的值
	// swap(a, b);
	// 地址传递，形参可以改变实参的值
	swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}