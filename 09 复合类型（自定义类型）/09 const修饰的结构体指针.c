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

int main901(void)
{
	ss stu1 = { "����", 18, 100, 99, 98, "����" };
	ss stu2 = { "����", 19, 100, 99, 98, "�Ϻ�" };

	// const ���νṹ��ָ������
	const ss* p = &stu1;
	// p = &stu2; // OK
	// p->age = 888; // err
	// (*p).age = 888; // err
	return 0;
}

int main902(void)
{
	ss stu1 = { "����", 18, 100, 99, 98, "����" };
	ss stu2 = { "����", 19, 100, 99, 98, "�Ϻ�" };

	// const ���νṹ��ָ�����
	ss* const p = &stu1;
	// p = &stu2; // err
	p->age = 888;
	strcpy(p->name, "ɳ��");
}

int main9(void)
{
	ss stu1 = { "����", 18, 100, 99, 98, "����" };
	ss stu2 = { "����", 19, 100, 99, 98, "�Ϻ�" };

	// const ���νṹ��ָ������
	// const ���νṹ��ָ�����
	const ss* const p = &stu1;
	// p = &stu2; // err
	// p->age = 888; // err
	ss** pp = &p;
	// (*pp) = &stu2;
	(*pp)->age = 888;
	(**pp).age = 888;
}