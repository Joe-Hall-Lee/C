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
	// ֵ���ݣ��ββ�Ӱ��ʵ�ε�ֵ
	// swap(a, b);
	// ��ַ���ݣ��βο��Ըı�ʵ�ε�ֵ
	swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}