#include <iostream>
using namespace std;
#include <string>
int main16()
{

	//加减乘除

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //整数相除 结果依然是整数 会将小数部分去除

	//两个数字相除 除数是不可以为零的 会报错 也要避免大数除以小数

	double d1 = 0.5;
	double d2 = 0.22;

	cout << d1 / d2 << endl;

	system("pause");

	return 0;



}