#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

/*
enum 交易
{
	插卡, 读卡, 输入密码, 锁卡, 查询, 取款, 退卡, 解锁
};
*/
enum TYPE
{
	run, attack, skill, dance = 10, showUI, frozen = 20, dizz, death, still
};

//  enum Bool
// {
//     _false, _true
// };
int main1201(void)
{
	int value;

	do {
		scanf("%d", &value);
		switch (value)
		{
		case run:
			printf("正在奔跑……\n");
			break;
		case attack:
			printf("发起攻击！\n");
			break;
		case skill:
			printf("施展技能！\n");
			break;
		case dance:
			printf("翩翩起舞！\n");
			break;
		case showUI:
			printf("显示用户界面……\n");
			break;
		case frozen:
			printf("被冻结了！\n");
			break;
		case dizz:
			printf("头晕目眩！\n");
			break;
		case death:
			printf("死亡……\n");
			return 0;
		case still:
			printf("静止不动……\n");
			break;
		}
	} while (value != death);

	return EXIT_SUCCESS;
}