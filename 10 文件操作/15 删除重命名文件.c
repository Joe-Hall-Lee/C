#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1501()
{
	int value = remove("F:/CS/C/C/c.txt");
	if (value == 0)
	{
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("ɾ��ʧ��\n");
	}
	return EXIT_SUCCESS;
}

int main15(void)
{
	// ������
	// int value = rename("F:/CS/C/C/a.txt", "F:/CS/C/C/abc.txt");
	// �ƶ��ļ�������
	int value = rename("F:/CS/C/C/a.txt", "F:/CS/C/C/10 �ļ�����/a.txt");
	if (value == 0)
	{
		printf("�ɹ�\n");
	}
	else
	{
		printf("ʧ��\n");
	}
}