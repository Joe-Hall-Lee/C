#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct student ss;
struct student
{
	char* name;
	int age;
	int* scores;
	char* addr;
};

int main7()
{
	// 通过结构体指针操作堆空间
	ss* p = (ss*)malloc(sizeof(ss) * 3);
	for (int i = 0; i < 3; i++) {
		p[i].name = (char*)malloc(sizeof(char) * 21);
		p[i].scores = (int*)malloc(sizeof(int) * 3);
		p[i].addr = (char*)malloc(sizeof(char) * 51);
	}

	for (int i = 0; i < 3; i++) {
		printf("Enter name: ");
		fgets(p[i].name, 21, stdin);
		p[i].name[strcspn(p[i].name, "\n")] = 0;

		printf("Enter age: ");
		scanf("%d", &p[i].age);

		printf("Enter 3 scores: ");
		scanf("%d %d %d", &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);

		printf("Enter address: ");
		int c;
		while ((c = getchar()) != '\n' && c != EOF);
		fgets(p[i].addr, 51, stdin);
		p[i].addr[strcspn(p[i].addr, "\n")] = 0;
	}

	printf("\nStudent Data:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name: %s, Age: %d, Scores: %d %d %d, Address: %s\n",
			p[i].name, p[i].age, p[i].scores[0], p[i].scores[1],
			p[i].scores[2], p[i].addr);
	}

	for (int i = 0; i < 3; i++) {
		free(p[i].name);
		free(p[i].scores);
		free(p[i].addr);
	}
	free(p);

	return 0;
}