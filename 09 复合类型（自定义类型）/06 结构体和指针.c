#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// �ṹ���ԱΪָ������
struct student
{
	char* name;
	int age;
	int* scores;
	char* addr;
};
int main601()
{
	struct student stu;
	// stu.name = "����";
	stu.name = (char*)malloc(sizeof(char) * 21);
	stu.scores = (int*)malloc(sizeof(int) * 3);
	stu.addr = (char*)malloc(sizeof(char) * 51);
	strcpy(stu.name, "����");
	stu.age = 20;
	stu.scores[0] = 100;
	stu.scores[1] = 90;
	stu.scores[2] = 80;
	strcpy(stu.addr, "�����г�����");
	printf("%s\n", stu.name);
	printf("%d\n", stu.age);
	printf("%d\n", stu.scores[0]);
	printf("%d\n", stu.scores[1]);
	printf("%d\n", stu.scores[2]);
	printf("%s\n", stu.addr);
	free(stu.name);
	free(stu.scores);
	free(stu.addr);
	return 0;
}
struct stu
{
	char name[21];
	int age;
	int scores[3];
	int addr[51];
};
int main6(void)
{
	// �ṹ��ָ��
	struct stu ss = { "�ֳ�", 20, 100, 100, 100, "�����г�����" };
	struct stu* p = &ss;
	// printf("%s\n", (*p).name);
	// printf("%d\n", (*p).age);

	// �ṹ��ָ��->��Ա
	// �ṹ�����.��Ա
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%d\n", p->scores[0]);
	printf("%d\n", p->scores[1]);
	printf("%d\n", p->scores[2]);
	printf("%s\n", p->addr);

	return 0;
}