#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	FILE* fp = fopen("F:/CS/C/C/a.txt", "w+");

	if (!fp)
		return -1;

	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')
			break;

		// ∆µ∑±µÿ∫Õ”≤≈ÃΩªª•£¨À…À”≤≈Ã

		fflush(fp);
		fputc(ch, fp);
	}

	fclose(fp);
	return EXIT_SUCCESS;
}