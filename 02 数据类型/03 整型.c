#include <stdio.h>

int main301(void)
{
	//�������� ��ʶ�� = ֵ
	//�޷���:unsigned;�з���:signed(��ʡ��)
	//signed int a = -10;

	unsigned int a = 10;
	//%u:ռλ������ʾ���һ���޷���ʮ������������
	//printf("%u\n", a);

	printf("%d\n", a);
	return 0;
}

int main302(void)
{
	//����
	//������0-1���˽���0-7��ʮ������0-9��0-15��a-f��A-F)

	//int a = 10;
	//printf("%d\n", a);
	////ռλ��%x�����һ��ʮ����������
	//printf("%x\n", a);
	//printf("%X\n", a);
	////ռλ��%o�����һ���˽�������
	//printf("%o\n", a);

	//����˽���������0��ͷ
	int a = 0123;
	//����ʮ������������0x��ͷ
	int b = 0xabc;
	//�ڼ������������ʱ��������ֱ�Ӷ���ɶ�����
	printf("%d\n", a);
	printf("%o\n", a);
	printf("%x\n", a);

	printf("%d\n", b);
	printf("%o\n", b);
	printf("%x\n", b);

    return 0;
}