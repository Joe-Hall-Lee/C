#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main1()
{
	int score;
	scanf("%d", &score);
	// ������ʽ���Ϊ�棬ִ��{}��Ӧ�Ĵ���
	// if (���ʽ)
	// if (���ʽ) {} else {}
	// if (���ʽ1) {} else if (���ʽ2) else {}
	// ����Ƕ��
	if (score > 700)
	{
		printf("��Ҫ���山\n");
		if (score > 720)
		{
			printf("��Ҫѧϰ�����\n");
		}
		else if (score > 710)
		{
			printf("��Ҫѧϰ΢����\n");
		}
		else
		{
			printf("��Ҫѧϰ����\n");
		}
	}
	else if (score > 680)
	{
		printf("��Ҫ�ϻ���\n");
	}
	else
	{
		printf("��Ҫ�ϴ�ר\n");
	}

	return EXIT_SUCCESS;
}