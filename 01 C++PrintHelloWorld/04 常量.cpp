#include <iostream>
using namespace std;

// 常量的定义方式
// 1#define 宏常量定义
// 2.const修饰的变量


#define Day 7

int main04()
{

//	Day = 14; // 错误：Day是常量 一旦修改就会报错

	const int month = 12;
	// month = 24; const 修饰的变量也称为常量
	cout << "一周总共有：" << Day << "天"<< endl;
	system("pause");

	return 0;



}
