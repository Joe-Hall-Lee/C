#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// �������Ե����Լ�����Ϊ�ݹ麯��
void BubbleSort(int*, int);

int main601()
{
	int arr[] = { 5, 2, 7, 3, 4, 6, 8, 9, 10, 1 };
	// ȫ�ֺ�������������������Ψһ��
	// ��������������Ŀ�������ļ���ʹ��
	// �������ڣ��ӳ��򴴽�����������
	BubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return EXIT_SUCCESS;
}

void fun07();
// ��̬����
// ��̬�������Ժ�ȫ�ֺ�������
// �����򣺵�ǰ�ļ���

static void fun07()
{
	printf("hello world1\n");
}
int main6(void)
{
	fun07();
}