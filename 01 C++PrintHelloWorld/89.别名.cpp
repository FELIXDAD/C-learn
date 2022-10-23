#include <iostream>
using namespace std;
#include <string>


int main89()
{

	//引用的基本语法 
	//数据类型 &别名 = 原名；
	int a = 10;
	int c = 20;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 20;//对别名和原名的修改都会同步影响彼此
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	//int& d; //引用必须要初始化 不然是非法的；
	//int&b = c;//引用一旦指定后 就不能再更改指向

	system("pause");
	return 0;



}