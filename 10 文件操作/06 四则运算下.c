#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main6(void)
{
	FILE* fp1 = fopen("F:/CS/C/C/四则运算.txt", "r");
	FILE* fp2 = fopen("F:/CS/C/C/四则运算结果.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("文件打开失败！\n");
		return -1;
	}

	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);
	while (fgets(p, 20, fp1) != NULL) // 从 fp1 指向的文件中读取算式
	{
		// 6 * 6 = \n
		if (sscanf(p, "%d %c %d = \n", &a, &c, &b) == 3) // 检查 sscanf 是否成功读取 3 个变量
		{
			switch (c)
			{
			case '+':
				sum = a + b;
				break;
			case '-':
				sum = a - b;
				break;
			case '*':
				sum = a * b;
				break;
			case '/':
				if (b == 0)
				{
					sum = 0; // 处理除数为 0 的情况
					printf("除数为 0！\n");
				}
				else
				{
					sum = a / b;
				}
				break;
			}

			fprintf(fp2, "%d %c %d = %d\n", a, c, b, sum); // 将结果写入 fp2 指向的文件
		}
		else
		{
			printf("解析算式失败：%s\n", p); // 处理无法解析的算式
		}
	}

	free(p);
	fclose(fp1);
	fclose(fp2);

	return 0;
}