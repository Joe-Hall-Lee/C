#include <stdio.h>
#include <stdlib.h>

int main1()
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	// 1. �Ҳ����ļ�
	// 2. �ļ�Ȩ�ޣ�����д��ִ�У�
	// 3. ������ļ��������� 65535
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	printf("���ļ��ɹ���%p\n", fp);

	fclose(fp);
	return 0;
}