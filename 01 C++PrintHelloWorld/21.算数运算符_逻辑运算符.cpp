#include <iostream>
using namespace std;
#include <string>
int main21()
{
	// !非门
	int a = 10;

	cout << !a << endl; // 0
	cout << !!a << endl; // 1

	// &&与门 同真为真，其余为假
	int b = 10;
	cout << (a && b) << endl; //  1

	int c = 0;
	cout << (a && c) << endl; //  0

	// ||或门 同假为假，一真为真
	cout << (a || c) << endl; //  1

	system("pause");

	return 0;



}