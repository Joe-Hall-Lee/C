#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main701()
{
	// int i; gcc -o hello.out hello.c -std=c99
	int j = 5;
	for (int i = 0; i < 10, j < 10; i++, j += 5)
	{
		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}

int main702(void)
{
	int i = 0;
	// while(1) for(;;)
	for (;;)
	{
		// if (i >= 10)
		//{
		//	// ��ѭ�����������break��ʾ����ѭ��
		//	break;
		// }
		printf("%d\n", i);
		i++;
	}
}

// ������
// ͨ���������һ��1-100֮�ڵ���

int main7(void)
{
	// ���������
	// 1. ����ͷ�ļ� time.h��stdlib.h
	// 2. ������������
	// 3. ��ȡ�����
	srand((unsigned int)time(NULL)); // ÿ���������һ��

	// int value = rand() % 10;  // 0~9
	// for (int i = 0; i < 10; i++)
	// {
	//     int value = rand() % 10;
	//	   printf("%d\n", value);
	// }

	int value = rand() % 100; // 0-99
	int num;
	// for (;;)
	while (1)
	{
		printf("���������֣�\n");
		scanf("%d", &num);
		if (value > num)
			printf("�������̫С��\n");
		else if (value < num)
			printf("�������̫����\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
	return 0;
}