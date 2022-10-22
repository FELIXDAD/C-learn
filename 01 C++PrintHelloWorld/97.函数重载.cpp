#include <iostream>
using namespace std;
#include <string>

int length(int a, int b) { // 函数名可以根据功能 使用同样的函数名不同的参数类型或者不同参数个数下做不同的作用 注意要在同一个作用域下 比如都在main外面
	return a + b;
}
float length(float a, float b) {
	return sin(a) + cos(b);
}


int func005(int& a) {

	cout << "非const" << endl;
}

int func005(const int& a) {

	cout << "const" << endl;
}

int func006(int a) {

	cout << "非const" << endl;
}

int func006(int a,int b =10) {

	cout << "const" << endl;
}
int main()
{
	int s = 1, b = 2;
	float x = 3, y = 5;
	cout << length(s,b) << endl;
	cout << length(x, y) << endl;
	int aa = 10;
	func005(aa); // 这个由于有实参所以会走第一个 
	func005(10); // 这个没有实参 编译器就会选择后者const去使用
	func006(10);// 这纯属找茬 会引起误会就不要用 
	system("pause");
	return 0;
}
