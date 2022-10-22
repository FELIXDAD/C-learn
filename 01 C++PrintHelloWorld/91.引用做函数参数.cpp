#include <iostream>
using namespace std;
#include <string>

void swap01(int num1, int num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;


}

void swap03(int& a, int& b) { //引用传递 形参会修改实参 （看起来这样操作两个地址 某些情况就不需要使用指针 也许）
	int temp = a;			  //原理 引用是可以引用本身的 利用修改引用同时也会修改原本实参的属性 即可达成在函数内去修改实参 可以理解为指针常量
	a = b;
	b = temp;

}

int main91()
{	
	int a = 10;
	int b = 20;
	swap01(a,b); //值传递不会修改实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	swap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}