#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
struct ����
{
	����
	�ȼ�
	�˺�
	��Χ
	����
	��ȴ
}
struct ������Ϣ
{
	�ȼ�
	����
	��Ǯ
	hp
	mp
	����
	����
	����
	struct ���� skills[4];
}
struct ������Ϣ info;
info.skills[0].����
*/
/*
struct ���Ѽ�¼
{
	���ѽ��
	����ʱ��
	���ѱ��
	���ѵص�
	���ʽ
	��ע
}
struct ���п�
{
	����
	����
	������
	����
	���
	struct ���Ѽ�¼ records[10];
}
*/
struct scores
{
	int cl; // C ����
	int cpp; // C++
	int cs; // C#
};
typedef struct student stu;
struct student
{
	char name[21];
	int age;
	struct scores ss;
	char addr[51];
};
int main4()
{
	// struct student stu;
	stu s;
	printf("ѧ���ṹ���С��%d\n", sizeof(stu));
	printf("�ɼ��ṹ���С��%d\n", sizeof(s.ss));
	printf("���������С��%d\n", sizeof(s.name));
}
int main401()
{
	// struct student stu = { "����", 18, 99, 99, 99, "����" };
	struct student stu;
	strcpy(stu.name, "������");
	stu.age = 20;
	stu.ss.cl = 100;
	stu.ss.cpp = 100;
	stu.ss.cs = 100;
	strcpy(stu.addr, "����");
	printf("%s\n%d\n%d\n%d\n%d\n%s\n", stu.name, stu.age, stu.ss.cl, stu.ss.cpp, stu.ss.cs, stu.addr);
	system("pause");
	return 0;
}