#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main701()
{
	float a = 3.14f;
	double b = 3.14;
	printf("%.2f\n", a);
	printf("%lf\n", b);

	//sizeof�ֽڴ�С
	//���������ݴ洢���ڴ��еĸ�ʽ��Ϊ����λ��ָ��λ��С��λ
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return EXIT_SUCCESS;
}

int main702(void)
{
	int a = 10;
	float b = 3.14;
	//ռλ������ʾ���һ��������Ӧ���ڴ��ַ��ţ��޷���ʮ��������������
	printf("%p\n", &a);
	printf("%p\n", &b);
	//��С�˶���
	getchar();
	return 0;
}

int main703(void)
{
	//float a = 0.123456;
	//printf("%e\n", a);
	float b = 3.2e3f;
	printf("%f\n", b);

	char ch = -10;
	printf("%p\n", &ch);
	system("pause");
	//printf("%d\n", ch);
	//printf("%c\n", ch);

	return 0;

}
