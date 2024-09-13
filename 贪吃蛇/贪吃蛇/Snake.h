#pragma once
#define WIDE 60
#define HIGH 20

struct BODY
{
	int X;
	int Y;
};

struct SNAKE
{
	int size;
	struct BODY body[WIDE * HIGH];
}snake;

int food[2] = { 0 }; // food[0] Ϊ X ���꣬food[1] Ϊ Y ����

int score = 0;
// ƫ������
int dx = 0;
int dy = 0;
// ��¼��ĩβ����
int lx = 0;
int ly = 0;

void InitFood();
void InitSnake();
void ShowUI();
void PlayGame();
void InitWall();