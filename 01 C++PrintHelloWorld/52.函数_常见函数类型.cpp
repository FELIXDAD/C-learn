#include <iostream>
using namespace std;
#include <string>

//四种函数类型 无参无返 有参无返 无参有返 有参有返

//1.无参无返
void test01() {
	cout << "this is test01" << endl;
}

//2.有参无返
void test02(int a) {
	cout << "this is test02 a = " << a << endl;
}

//3.无参有返
int test03() {
	cout << "this is test03" << endl;
	return 1000;
}

//4.有参有返
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