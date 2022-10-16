#include <iostream>
using namespace std;
#include <string>
int main60()
{
	int a = 10;
	int b = 20;
	//const修饰指针
	const int* p = &a;
	//*p = 20;此操作不被运行 修饰指针代表 指针指向
	p = &b;

	system("pause");

	return 0;



}