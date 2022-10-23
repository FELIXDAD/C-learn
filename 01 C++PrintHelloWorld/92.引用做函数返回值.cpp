#include <iostream>
using namespace std;
#include <string>

// 不要作为局部变量的引用
int& test001() {

	int a = 10;
	return a; // 因为局部变量用完就会被释放了 不要这样做
}
// 函数的调用可以作为左值
int& test002() {

	static int a = 10; //改为静态变量 存放在全局区 只有程序结束后才会释放
	return a;
}

int main92()
{
	//int& ref = test01(); //不要这样做
	int& ref = test002();

	test002() = 1000; //这时候函数本身是作为一个a的别名被引用的操作 等于 a = 1000；同时上一步ref也是test002的别名 所以也会被同步修改
	//知道这个东西
	system("pause");
	return 0;
}