#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

/*
enum ����
{
	�忨, ����, ��������, ����, ��ѯ, ȡ��, �˿�, ����
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
			printf("���ڱ��ܡ���\n");
			break;
		case attack:
			printf("���𹥻���\n");
			break;
		case skill:
			printf("ʩչ���ܣ�\n");
			break;
		case dance:
			printf("�������裡\n");
			break;
		case showUI:
			printf("��ʾ�û����桭��\n");
			break;
		case frozen:
			printf("�������ˣ�\n");
			break;
		case dizz:
			printf("ͷ��Ŀѣ��\n");
			break;
		case death:
			printf("��������\n");
			return 0;
		case still:
			printf("��ֹ��������\n");
			break;
		}
	} while (value != death);

	return EXIT_SUCCESS;
}