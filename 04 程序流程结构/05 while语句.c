#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main501()
{
	// while (表达式)

	int i = 0;
	// 死循环
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

// 凡是带 7 或 7 的倍数需要敲桌子，否则正常输出
int main5(void)
{
	int i = 1;
	while (i < 100)
	{
		// 7的倍数 || 个位带7 || 十位带7
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			printf("敲桌子\n");
		}
		else
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}