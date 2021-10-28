#include <iostream>
using namespace std;

int main11()
{


	char ch = 'abc'; // char 字符串变量 单引号内只能有一个字符 
					//如写了多个只会识别最后一个 因为内存中放不下那么多字符串

	int a = 98;
	//char(a)会返回b 同样 int(b)会返回98
	cout << int(a) << endl;

	system("pause");

	return 0;



}