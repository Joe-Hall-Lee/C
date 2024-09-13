#include <stdio.h>
//宏定义常量
#define PI 3.14159
//圆的面积：s = pi * r * r
//圆的周长：l = 2 * pi * r

int main2(void)
{
	//常量PI
	//const 数据类型 常量名 = 值
	//const float pi = 3.14159;

	//在定义局部变量可以在数据类型前加修饰auto，也可以不加
	auto float r = 3.4;

	float s = PI * r * r;
	float l = 2 * PI * r;
	//占位符：%f，表示输出一个浮点型float，默认保留六位小数，会四舍五入
	printf("圆的面积：%.2f\n", s);
	printf("圆的周长：%.2f\n", l);

	//标识符：
	//1、不能使用系统关键字
	//2、允许使用字母、数字、下划线
	//3、不允许数字开头
	//4、见名知义

	//int ___ = 123;
	//float _abc_123 = 1;
	int Int = 123;
	printf("%d\n", Int);

	return 0;

}