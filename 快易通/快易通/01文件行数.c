#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1()
{
	FILE* fp = fopen("F:/CS/C/C/dict.txt", "r");
	if (!fp)
		return -1;
	char* temp = (char*)malloc(sizeof(char) * 1024);

	int i = 0;
	while (!feof(fp))
	{
		fgets(temp, 1024, fp);
		i++;
	}
	printf("%d\n", i);
	fclose(fp);
	return EXIT_SUCCESS;
}