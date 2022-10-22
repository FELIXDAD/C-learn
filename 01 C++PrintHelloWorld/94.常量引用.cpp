#include <iostream>
using namespace std;
#include <string>

void showValue(const int& val) { // 传值会占空间 但是又不想有个误操作 所以可以用 const 去修饰下引用 不让函数里产生修改
	//val = 1000;
	cout << val << endl;
}

int main94()
{
	int a = 10;
	int& aa = a;
	//众所周知 引用必须要有一块合法的内存地址来引用 也就是必须指向一个参数

	//但下面这个可以运行是因为编译器帮我们执行了操作 int temp = 10; int& ref = temp;
	const int& ref = 10; 

	int b = 100;

	showValue(b);
	system("pause");
	return 0;
}


// 总结 引用最大的作用是简化版的指针  如果想让某个函数去修改实参 直接在函数名字上带着&符号去使用 就像houdini里的那个玩意一样