#include <iostream>
using namespace std;
#include <string>

//函数的声明
//提前告诉编译器函数的存在 可以利用函数的声明 告诉编译器有这么一个函数先填上 东西在后面
//声明可以写多次 但是定义只能写一次
int max(int a, int b);


int main54()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	

	system("pause");

	return 0;



}

//比较函数 实现两个整型数字进行比较 返回较大的值
int max(int a, int b) {
	return a > b ? a : b;
}