#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct student
{
	// 结构体成员需要偏移对齐
	char name[21];
	int age;
	char sex;
	int score[3];
	char addr[51];
};

int main201()
{
	struct student stu[3] =
	{
		{"黄某航", 22, 'M', 88, 99, 0, "河北唐山"},
		{"马某羊", 18, 'F', 59, 59, 59, "河北邯郸"},
		{"大法师", 30, 'M', 100, 100, 100, "黑龙江大庆"}
	};

	// sizeof() 计算数据类型在内存中占的字节大小
	printf("结构体数组大小：%d\n", sizeof(stu));
	printf("结构体元素大小：%d\n", sizeof(stu[0]));
	printf("结构体元素个数：%d\n", sizeof(stu) / sizeof(stu[0]));

	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n", stu[0].name);
		printf("年龄：%d\n", stu[0].age);
		printf("性别：%s\n", stu[0].sex == 'M' ? "男" : "女");
		printf("成绩1：%d\n", stu[0].score[0]);
		printf("成绩2：%d\n", stu[0].score[1]);
		printf("成绩3：%d\n", stu[0].score[2]);
		printf("地址：%s\n", stu[0].addr);
	}

	return EXIT_SUCCESS;
}

int main2(void)
{
	struct student stu[3] =
	{
		{"黄某航", 22, 'M', 88, 99, 0, "河北唐山"},
		{"马某羊", 18, 'F', 59, 59, 59, "河北邯郸"},
		{"大法师", 30, 'M', 100, 100, 100, "黑龙江大庆"}
	};
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - 1 - i; j++)
		{
			if (stu[j].age < stu[j + 1].age)
			{
				struct student temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n", stu[0].name);
		printf("年龄：%d\n", stu[0].age);
		printf("性别：%s\n", stu[0].sex == 'M' ? "男" : "女");
		printf("成绩1：%d\n", stu[0].score[0]);
		printf("成绩2：%d\n", stu[0].score[1]);
		printf("成绩3：%d\n", stu[0].score[2]);
		printf("地址：%s\n", stu[0].addr);
	}
}