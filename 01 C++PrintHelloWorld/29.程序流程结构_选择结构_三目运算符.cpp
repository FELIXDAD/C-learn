#include <iostream>
using namespace std;
#include <string>
int main29()
{

	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);//a是否大于b如果是返回a如果不是返回b
	//在C++中三目运算符返回的是变量也就说明了，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");

	return 0;



}