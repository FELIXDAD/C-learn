#include <iostream>
#include"swap.h"
using namespace std;
#include <string>
int main58()
{
	//空指针
	//1 空指针用于给指针变量进行初始化
	int* p = NULL;
	//2 空指针是不可以进行访问的
	//0-255之间的内存编号是系统占用的因此不可以访问
	
	//野指针
	//在程序中 避免出现野指针 也就是不是我们申请的空间 没有权利访问
	int* p = (int *)0x1100;
	system("pause");

	return 0;



}