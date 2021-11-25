#include <iostream>
using namespace std;
#include <string>
#include "swap.h" // 调用swap.h头文件 注意是双引号

//1 创建.h后缀名的头文件
//2 创建.cpp后缀名的原文件
//3 在头文件中写函数的声明
//4 在原文件中写函数的定义
//注意不要在头文件中写函数定义 不然多次引用会报错
int main55()
{

	int a = 10;
	int b = 20;
	swap(10, 20);
	system("pause");

	return 0;



}