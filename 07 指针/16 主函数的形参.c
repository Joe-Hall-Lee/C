#include <stdio.h>
#include <stdlib.h>

// gcc -o hello hello.c（4 个参数：“gcc”、“-o”、“hello”、“hello.c”）
// int argc 表示传递参数的个数
// char *argv[] = {"gcc", "-o", "hello", "hello.c"} 表示参数具体内容
int main16(int argc, char* argv[])
{
	// gcc
	if (argc < 3)
	{
		printf("缺少参数\n");
		return -1;
	}
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	return EXIT_SUCCESS;
}