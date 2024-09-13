#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main6(void)
{
	FILE* fp1 = fopen("F:/CS/C/C/��������.txt", "r");
	FILE* fp2 = fopen("F:/CS/C/C/����������.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("�ļ���ʧ�ܣ�\n");
		return -1;
	}

	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);
	while (fgets(p, 20, fp1) != NULL) // �� fp1 ָ����ļ��ж�ȡ��ʽ
	{
		// 6 * 6 = \n
		if (sscanf(p, "%d %c %d = \n", &a, &c, &b) == 3) // ��� sscanf �Ƿ�ɹ���ȡ 3 ������
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
					sum = 0; // �������Ϊ 0 �����
					printf("����Ϊ 0��\n");
				}
				else
				{
					sum = a / b;
				}
				break;
			}

			fprintf(fp2, "%d %c %d = %d\n", a, c, b, sum); // �����д�� fp2 ָ����ļ�
		}
		else
		{
			printf("������ʽʧ�ܣ�%s\n", p); // �����޷���������ʽ
		}
	}

	free(p);
	fclose(fp1);
	fclose(fp2);

	return 0;
}