#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include "Snake.h"

/*
	1. �����ߵĽṹ��
	2. ��ʼ����
	3. ��ʼ��Ϸ
		�ߺ�ǽ����ײ
		�ߺ�������ײ
		�ߺ�ʳ����ײ
			�������ʳ��
			����������
			��������
		���������
	4. ��Ϸ����
*/
void InitFood()
{
	srand((size_t)time(NULL));
	food[0] = rand() % WIDE;
	food[1] = rand() % HIGH;
}
void InitSnake()
{
	snake.size = 2;
	snake.body[0].X = WIDE / 2;
	snake.body[0].Y = HIGH / 2;
	snake.body[1].X = WIDE / 2 - 1;
	snake.body[1].Y = HIGH / 2;
}
void ShowUI()
{
	COORD coord;
	// ����ĩβ�ո�
	coord.X = lx;
	coord.Y = ly;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	// ��ʾ�ߵ�λ��
	for (int i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
		{
			putchar('@');
		}
		else
		{
			putchar('*');
		}
	}

	// ��ʾʳ��λ��
	coord.X = food[0];
	coord.Y = food[1];
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');
}
void PlayGame()
{
	char key = 'D';
	while (snake.body[0].X >= 0 && snake.body[0].X < WIDE && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
	{
		// ��ʾ����
		ShowUI();
		// �������
		while (_kbhit())
		{
			key = _getch();
		}
		switch (key)
		{
		case 'A': case 'a':
			dx = -1;
			dy = 0;
			break;
		case 'D': case 'd':
			dx = 1;
			dy = 0;
			break;
		case 'W': case 'w':
			dx = 0;
			dy = -1;
			break;
		case 'S': case 's':
			dx = 0;
			dy = 1;
			break;
		}

		// �Ƿ��������ײ
		for (int i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
			{
				return;
			}
		}

		// �ߺ�ʳ�����ײ
		if (snake.body[0].X == food[0] && snake.body[0].Y == food[1])
		{
			// ���������
			InitFood();
			// ����������
			snake.size++;
			// ��������
			score += 10;
			// �ؿ����ٶȣ��ϰ���
		}
		// �߸�������
		lx = snake.body[snake.size - 1].X;
		ly = snake.body[snake.size - 1].Y;

		for (int i = snake.size - 1; i > 0; i--)
		{
			snake.body[i].X = snake.body[i - 1].X;
			snake.body[i].Y = snake.body[i - 1].Y;
		}

		// ������ͷ
		snake.body[0].X += dx;
		snake.body[0].Y += dy;
		Sleep(100);
		// system("cls");
	}
}

void InitWall()
{
	for (int i = 0; i <= HIGH; i++)
	{
		for (int j = 0; j <= WIDE; j++)
		{
			if (i == HIGH)
			{
				putchar('=');
			}
			else if (j == WIDE)
			{
				putchar('=');
			}
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
int main()
{
	srand((size_t)time(NULL));

	// ȥ������̨���
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
	InitWall();
	InitFood();
	InitSnake();
	// ShowUI();
	PlayGame();
	// getchar();

	return EXIT_SUCCESS;
}