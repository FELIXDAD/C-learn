#include <iostream>
using namespace std;
#include <string>
int main21()
{
	// !����
	int a = 10;

	cout << !a << endl; // 0
	cout << !!a << endl; // 1

	// &&���� ͬ��Ϊ�棬����Ϊ��
	int b = 10;
	cout << (a && b) << endl; //  1

	int c = 0;
	cout << (a && c) << endl; //  0

	// ||���� ͬ��Ϊ�٣�һ��Ϊ��
	cout << (a || c) << endl; //  1

	system("pause");

	return 0;



}