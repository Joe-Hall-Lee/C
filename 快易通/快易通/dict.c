#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"dict.h"
#define SIZE 111104
/*
	1. 创建结构体存储单词和翻译
	2. 读取单词 格式化存储对应的堆空间中
	3. 单词查找
	4. 销毁堆空间
*/
int GetWord() {
	FILE* fp = fopen("F:/CS/C/C/dict.txt", "r");
	if (!fp) {
		printf("加载单词库失败\n");
		return -1;
	}

	list = (dict*)malloc(sizeof(dict) * SIZE);

	index = (pos*)malloc(sizeof(pos) * 27);

	char flag = 'a'; // Current character to index
	index[0].start = 0; // Index for words starting with 'a'
	index[0].end = 0;
	int idx = 0; // Index for the alphabet ('a' -> 0, 'b' -> 1, ..., non-alpha -> 26)

	int i = 0; // 数组下标
	char* temp = (char*)malloc(sizeof(char) * 2048);

	// Read the file line by line
	while (!feof(fp)) {
		memset(temp, 0, 2048);
		fgets(temp, 2048, fp);
		if (strlen(temp) > 0) {
			// 开辟单词的堆空间 #a\n\0
			// 去掉 \n
			temp[strlen(temp) - 1] = '\0';
			list[i].word = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
			// 将单词放在指定堆空间中
			strcpy(list[i].word, &temp[1]);

			// Update the index
			if (idx != 26 && list[i].word[0] == flag) {
				index[idx].end++;
			}
			else if (idx != 26) {
				idx++;
				index[idx].start = index[idx - 1].end;
				index[idx].end = index[idx - 1].end + 1;
				flag++;
			}

			// Read the translation line
			memset(temp, 0, 2048);
			fgets(temp, 2048, fp);
			if (strlen(temp) > 0) {
				temp[strlen(temp) - 1] = '\0'; // Remove the newline character
				// Allocate memory for the translation and copy it from temp
				list[i].trans = (char*)malloc(sizeof(char) * (strlen(temp) - 6 + 1));
				if (!list[i].trans) {
					printf("分配翻译内存失败\n");
					// Free all previously allocated memory before returning
					free(list[i].word);
					while (--i >= 0) {
						free(list[i].word);
						free(list[i].trans);
					}
					free(list);
					free(index);
					free(temp);
					fclose(fp);
					return -1;
				}
				strcpy(list[i].trans, &temp[6]); // Copy the translation, skipping the prefix "Trans: "
			}

			i++; // Move to the next entry
		}
	}

	// Cleanup
	free(temp);
	fclose(fp);

	// Set the start and end for non-alphabetical entries
	index[26].start = index[25].end;
	index[26].end = SIZE;

	return i; // Return the number of words read
}

int SearchWord(char* word, char* trans, int idx)
{
	if (!word || !trans)
	{
		printf("输出发生异常\n"); // exit(-1)
		return -1;
	}
	// a.m.
	for (int i = index[idx].start; i < index[idx].end; i++)
	{
		// 如果用户输入的单词和词库中相同返回单词对应的翻译
		if (!strcmp(word, list[i].word))
		{
			strcpy(trans, list[i].trans);
			return 0;
		}
	}
	return 1;
}
// 数据销毁
void DestorySpace()
{
	if (!list)
		return;
	if (index)
	{
		free(index);
		index = NULL;
	}
	for (int i = 0; i < SIZE; i++)
	{
		free(list[i].word);
		free(list[i].trans);
	}
	free(list);
	list = NULL;
}

int main()
{
	// 获取单词和翻译
	GetWord();

	// 接收用户输入的单词
	char* word = (char*)malloc(sizeof(char) * 1024);
	// 根据单词提供翻译
	char* trans = (char*)malloc(sizeof(char) * 1024);

	int idx = 0;
	while (1)
	{
		memset(word, 0, 1024);
		memset(trans, 0, 1024);
		scanf("%s", word);
		// gets(word);
		// scanf("%[^\n], word");
		// getchar();
		// 出口
		if (!strcmp(word, "comm=exit"))
			break;

		// 格式化，大小写转换

		// 0-26
		if (*word >= 'a' && *word <= 'z')
			idx = *word - 'a';
		else
			idx = 26;
		if (!SearchWord(word, trans, idx))
			printf("%s\n", trans);
		else
			printf("未找到该单词\n");
	}

	free(word);
	free(trans);
	DestorySpace();
	return EXIT_SUCCESS;
}