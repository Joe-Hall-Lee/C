#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main501()
{
	// while (���ʽ)

	int i = 0;
	// ��ѭ��
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}
	return EXIT_SUCCESS;
}

int main502(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}

	return 0;
}

// ���Ǵ� 7 �� 7 �ı�����Ҫ�����ӣ������������
int main5(void)
{
	int i = 1;
	while (i < 100)
	{
		// 7�ı��� || ��λ��7 || ʮλ��7
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			printf("������\n");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}