#include <stdio.h>
#include <stdlib.h>

int main801(void)
{
	int a[] = { 1, 2, 3 };
	int b[] = { 4, 5, 6 };
	int c[] = { 7, 8, 9 };
	// ָ��������һ������Ķ�ά����ģ��
	// ָ�������Ӧ�ڶ���ָ��

	int* arr[] = { a, b, c };
	// ָ������Ͷ���ָ�뽨����ϵ
	int** p = arr;

	// printf("%d\n", **p);
	// ����ָ���ƫ�������൱��������һ��һά�����С
	// printf("%d\n", **(p + 1));
	// һ��ָ���ƫ�������൱��������һ��Ԫ��
	printf("%d\n", *(*p + 1)); // arr[0][1]
	// printf("%d\n", *(*(p + 1) + 1));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// printf("%d ", p[i][j]);
			// printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	return 0;
}

int main8(void)
{
	int a = 10;
	int b = 20;
	int* p = &a;

	int** pp = &p;
	int*** ppp = &pp;
	// *ppp == pp == &p
	// **ppp == *pp == p == &a
	// ***ppp == **pp == *p == a
	// *pp = &b; // �ȼ��� p = &b;
	// **pp = 100;
	// *pp = 100; // err
	printf("%d\n", *p);
	printf("%d\n", a);
	return 0;
}