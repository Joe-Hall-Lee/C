#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main401(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	if (!fp)
	{
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 1024);
	memset(p, 0, 5);

	fgets(p, 5, fp);
	printf("%s\n", p);
	memset(p, 0, 5);

	fgets(p, 5, fp);
	printf("%s\n", p);
	free(p);
	fclose(fp);
	return 0;
}

int main402(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");
	if (!fp)
	{
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);

	// feof(�ļ�ָ��) �ж��ļ��Ƿ񵽽�β�������ж��ı��ļ�Ҳ�����ж϶������ļ�
	// ������ļ���β����ֵΪ�� 0 ��ֵ
	// ���û���ļ���β����ֵΪ 0
	while (!feof(fp))
	{
		memset(p, 0, 100);
		fgets(p, 100, fp);

		printf("%s", p);
	}
	return 0;
}

int main403(void)
{
	FILE* fp = fopen("F:/CS/C/C/b.txt", "w");
	if (!fp)
		return -1;
	char ch[] = "���ɶ\0����զ��";
	fputs(ch, fp);
	fclose(fp);
	return 0;
}

int main404(void)
{
	FILE* fp = fopen("F:/CS/C/C/b.txt", "r");
	if (!fp)
		return -1;
	char* p = (char*)malloc(sizeof(char) * 1024);
	while (1)
	{
		memset(p, 0, 1024);
		// scanf("%s", p);
		scanf("%[^\n]", p);
		// fgets()
		// ���ɻس� \n
		getchar();

		// ׷�� \n

		// ֹͣ�������� comm=exit
		if (!strcmp(p, "comm=exit"), 9)
			break;
		strcat(p, "\n");

		fputs(p, fp);
	}
	free(p);
	fclose(fp);
}

// 10 + 2
// ֵ ����� ֵ = \n sprintf