#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct student
{
	char name[21];
	int age;
	int score;
	char addr[51];
}stu;

int main1101(void)
{
	stu ss[3] =
	{
		{"����", 18, 100, "����"},
		{"����", 19, 99, "�Ϻ�"},
		{"����", 20, 98, "����"}
	};
	FILE* fp = fopen("F:/CS/C/C/d.txt", "wb");
	if (!fp)
		return -1;
	for (int i = 0; i < 3; i++)
		fwrite(&ss[i], sizeof(stu), 1, fp);
	return 0;
}

int main11(void)
{
	FILE* fp = fopen("F:/CS/C/C/d.txt", "rb");
	if (!fp)
		return -1;
	stu* ss = (stu*)malloc(sizeof(stu) * 3);
	int i = 0;
	while (!feof(fp))
	{
		fread(&ss[i], sizeof(stu), 1, fp);

		i++;
	}
	for (int j = 0; j < 3; j++)
	{
		printf("������%s\n", ss[j].name);
		printf("���䣺%d\n", ss[j].age);
		printf("�ɼ���%d\n", ss[j].score);
		printf("��ַ��%s\n", ss[j].addr);
	}

	free(ss);
	fclose(fp);
	return 0;
}