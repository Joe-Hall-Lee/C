#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct student ss;
struct student
{
	char name[21];
	// char* name;
	int age;
	int score[3];
	char addr[51];
};
void fun01(ss stu1)
{
	// stu1.name = (char*)malloc(sizeof(char) * 21);
	strcpy(stu1.name, "����");
	printf("%s\n", stu1.name);
}
int main801()
{
	ss stu = { NULL, 20, 100, "����" };
	// stu.name = (char*)malloc(sizeof(char) * 21);
	strcpy(stu.name, "����");
	fun01(stu);
	printf("%s\n", stu.name);

	return 0;
}

void fun02(ss* stu)
{
	strcpy(stu->name, "����");
	printf("%s\n", stu->name);
}
int main802(void)
{
	// �ṹ��ָ����Ϊ��������
	ss stu = { "����", 20, 100, "����" };

	fun02(&stu);
	printf("%s\n", stu.name);
	return 0;
}

// ������Ϊ���������˻�Ϊָ�룬��ʧԪ�ؾ��ȣ���Ҫ���ݸ���
void BubbleSort(ss* stu, int len)
{
	// printf("%d\n", sizeof(stu));
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			// if (stu[j].age > stu[j + 1].age)
			if ((stu + j)->age > (stu + j + 1)->age)
			{
				// �ṹ�帳ֵ
				ss temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}
int main8(void)
{
	ss stu[3] =
	{
		{ "����", 20, 100, 32, 43, "����" },
		{ "����", 20, 100, 43, 43, "�Ϻ�" },
		{ "����", 20, 100, 43, 43, "����" }
	};
	BubbleSort(stu, 3);
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", stu[i].name);
		printf("%d\n", stu[i].age);
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", stu[i].score[j]);
		}
		printf("%s\n", stu[i].addr);
	}
}