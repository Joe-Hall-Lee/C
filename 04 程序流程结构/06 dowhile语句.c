#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main601()
{
	int i = 0;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 10);

	// while (i < 10)
	//{
	//	printf("%d\n", i);
	//	i++;
	// }
	return EXIT_SUCCESS;
}

// ˮ�ɻ����� 100-999������λ������������ӵ���������������һ��ˮ�ɻ���
int main6(void)
{
	int i = 100;
	do
	{
		// ��λ��
		int a = i % 10;
		// ʮλ��
		int b = i / 10 % 10;
		// ��λ��
		int c = i / 100;
		// �����ж�
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
			printf("%d\n", i);
		i++;
	} while (i <= 999);
	return EXIT_SUCCESS;
}