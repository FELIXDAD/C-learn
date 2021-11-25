#include <iostream>
using namespace std;
#include <string>


//实现一个加法函数 功能传入两个整型数据 计算数据相加的结果并返回
//函数要写在main外面不然会报错
//函数定义的时候，num1和num2并没有真实数据 只是形式上的参数 简称形参
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 0;
	int b = 0;
	cout << "input two number to sum:" << endl;
	cin >> a;
	cin >> b;

	int c = add(a, b);
	cout << c;


	system("pause");

	return 0;



}