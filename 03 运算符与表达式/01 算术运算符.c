#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main101()
{
	int a = 10;
	int b = 0;
	// printf("%d\n", a / b);
	// ȡ��ֻ�ܶ����Ͳ���
	// printf("%d\n", a % b);
	return EXIT_SUCCESS;
}

int main102()
{
	int a = 10;
	// a = a + 1;  // 11
	// a++;  // ������
	// ++a;  // ǰ����
	// ǰ�������ڱ��ʽ֮ǰ���� ++ �ٽ��б��ʽ����
	// �������Ƚ��Ա��ʽ�����ڽ��� ++ ����
	// int b = ++a * 10;
	// a++;
	int b = a * 10;
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}

int main103(void)
{
	int a = 10;
	// a--;
	// ������
	int b = ++a + --a + a++;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}