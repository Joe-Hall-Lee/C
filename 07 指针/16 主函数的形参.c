#include <stdio.h>
#include <stdlib.h>

// gcc -o hello hello.c��4 ����������gcc������-o������hello������hello.c����
// int argc ��ʾ���ݲ����ĸ���
// char *argv[] = {"gcc", "-o", "hello", "hello.c"} ��ʾ������������
int main16(int argc, char* argv[])
{
	// gcc
	if (argc < 3)
	{
		printf("ȱ�ٲ���\n");
		return -1;
	}
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	return EXIT_SUCCESS;
}