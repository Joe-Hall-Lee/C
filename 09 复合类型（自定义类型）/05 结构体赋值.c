#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct student
{
	char name[21];
	// char* name;
	int age;
	int score;
	char addr[51];
};
int main5()
{
	struct student stu = { "孙尚香", 18, 100, "北京市" };
	struct student s1 = stu;
	// int a = 1;
	// int b = a;
	// b = 2;

	// 深拷贝和浅拷贝
	strcpy(s1.name, "张飞");
	s1.age = 28;
	s1.score = 99;
	printf("%s\n", stu.name);
	return 0;
}