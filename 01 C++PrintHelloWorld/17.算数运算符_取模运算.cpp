#include <iostream>
using namespace std;
#include <string>
int main17()
{

	//加减乘除

	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	// 小数模大数还是本身
	cout << b1 % a1 << endl;

	//同样的模数是不可以为零的
	int a2 = 10;
	int b2 = 0;
	//cout << a2 % b2 << endl;

	//两个小数不可以做取模运算
	double a3 = 3.14;
	double b3 = 1.1;
	//cout << a3 % b3 << endl;

	system("pause");

	return 0;



}