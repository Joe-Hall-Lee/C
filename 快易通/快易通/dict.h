#pragma once
#include<stdlib.h>
typedef struct DICT
{
	char* word;
	char* trans;
}dict;

typedef struct POSTION
{
	int start;
	int end;
}pos;

dict* list = NULL;
// ��¼���ʵ��±�
pos* index = NULL;

// ��������
// ��ȡ���ʿ��еĵ��ʺͷ���
int GetWord();
// ���ҵ���
int SearchWord(char* word, char* trans, int idx);
// ��������
void DestorySpace();
