#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(void)
{
	//黄瓜：3 元/斤，购买 5 斤
	//常量：在程序运行过程中，其值不能发生改变的量，称为常量
	const int price = 3;  //常量，只读变量
	//price = 5;  //err
	//变量：在程序运行过程中，其值可以发生改变的量，成为变量
	//int weight = 5;
	int weight;
	printf("请输入购买斤数：\n");
	scanf("%d", &weight);
	int sum = price * weight;
	printf("%d\n", sum);

	return 0;
}