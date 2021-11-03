#include <iostream>
using namespace std;
#include <string>
int main18()
{
	   
	//前置递增
	int a = 10;
	++a;
	cout << a << endl;

	//后置递增
	int b = 10;
	b++;
	cout << b << endl;

	//前置和后置的区别 
	//前置递增 先让变量 +1 在进行表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << a2 << endl;
	cout << b2 << endl;

	//后置递增 先让变量 +1 在进行表达式运算
	int a3 = 10;
	int b3 = a3++ * 10;		//后置是在a3参与完运算后 再把数值加给a3
	cout << a3 << endl;		//11
	cout << b3 << endl;		//100
	system("pause"); 

	return 0;



}