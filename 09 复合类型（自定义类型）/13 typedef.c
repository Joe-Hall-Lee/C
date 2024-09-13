#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// 1. 为已存在的数据类型起别名
// 2. 定义函数指针
typedef unsigned int ui;
typedef unsigned char uc;
// typedef struct stu ss;

typedef struct stu
{
	char name[21];
	int age;
	int score;
	char addr[51];
}ss;
int main13(void)
{
	ui a = 10;
	uc b = 20;
	ss stu;
	stu.name;
	printf("%d\n", a);
	printf("%d\n", b);
	return EXIT_SUCCESS;
}