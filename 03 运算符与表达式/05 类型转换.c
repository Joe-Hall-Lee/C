#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	float p = 3.567;
	int w = 2;
	// ��ʽת��
	// double sum = p * w;
	// (��������) ǿ������ת�������������������
	int sum = (int)(p * w);
	printf("%d\n", sum);

	return EXIT_SUCCESS;
}