#include <stdio.h>
#include <stdlib.h>

int main201()
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "r");

	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	char ch;
	// �ļ����ַ���ȡ
	// �ļ�Ĭ�Ͻ�βΪ -1
	ch = fgetc(fp);
	printf("%c\n", ch);
	// �����޸��ļ�ָ�룬�ļ��ڶ�ȡʱ��������Զ������ƶ�
	// fp++; // err
	ch = fgetc(fp);
	printf("%c\n", ch);
	// �ر��ļ�
	fclose(fp);
	return 0;
}

int main2(void)
{
	// FILE* fp = fopen("F:/CS/C/C/a.txt", "w");
	FILE* fp = fopen("F:/CS/C/C/Դ�ļ�.txt", "r");

	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	char ch;
	while (ch = fgetc(stdin) != EOF)
	{
		printf("%c\n", ch);
	}
	fclose(fp);
}
int main202(void)
{
	// ��д�ķ�ʽ���ļ�������ļ������ڻᴴ��һ�����ļ�������ļ����ڣ����������
	FILE* fp = fopen("F:/CS/C/C/b.txt", "w");

	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	char ch = 'a';
	// �ַ�д��
	fputc(ch, fp);
	fclose(fp);
	return 0;
}
int main(void)
{
	FILE* fp = fopen("F:/CS/C/C/a.c", "w");

	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	char ch = 'a';
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '