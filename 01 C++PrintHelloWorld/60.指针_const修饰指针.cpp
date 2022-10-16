#include <iostream>
using namespace std;
#include <string>
int main()
{
	//const 修饰指针 常量指针

	int a = 10;
	int b = 20;
	//const修饰指针 只可以修改指针指向的地址 但是不可以修改被指针指向的值
	const int* p = &a;
	//*p = 20;此操作不可被运行 修饰指针代表 指针指向
	p = &b;


	//const 修饰常量 指针常量 指针指向不可以改 指针指向的值可以改 和上面的正好相反
	int* const o = &a;

	//*o = &b;此操作不可被运行 
	*o = b;


	//const 既修饰指针又修饰常量 指针指向和指向的值都不可修改
	const int* const o = &a;

	//*o = &b;此操作不可被运行 
	//*o = b; 此操作也不可被运行


	cout << o  << endl;
	system("pause");

	return 0;



}