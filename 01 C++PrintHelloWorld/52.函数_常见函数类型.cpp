#include <iostream>
using namespace std;
#include <string>

//���ֺ������� �޲��޷� �в��޷� �޲��з� �в��з�

//1.�޲��޷�
void test01() {
	cout << "this is test01" << endl;
}

//2.�в��޷�
void test02(int a) {
	cout << "this is test02 a = " << a << endl;
}

//3.�޲��з�
int test03() {
	cout << "this is test03" << endl;
	return 1000;
}

//4.�в��з�
int test04(int a) {
	cout << "this is test04 a = " << a << endl;
	return a;
}

int main52()
{

	test01();
	test02(100);
	int a = test03();
	cout << a << endl;
	int b = test04(100);
	cout << b << endl;
	system("pause");

	return 0;



}