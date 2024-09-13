#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main801()
{
	// 外层执行一次，内层执行一周
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("i = %d, j = %d\n", i, j);
	}
	system("pause");
	return EXIT_SUCCESS;
}

int main802(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				// 清屏
				system("cls");
				printf("%02d:%02d:%02d\n", i, j, k);
				Sleep(960);
			}
		}
	}
	return 0;
}

// 九九乘法口诀
/*
	1*1=1
	1*2=2 2*2=4
	1*3=3 2*3=6 3*3=9
*/
int main8(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d*%d=%d\t", j, i, i * j);
		printf("\n");
	}
	return 0;
}