#include <iostream>
using namespace std;
#include <string>



int* func1(){
	int a = 10;
	//return &a; //由于局部变量是在栈区 函数结束运行后就会清理 所以这里只能在第一次时候正确返回 一旦函数结束就会变成乱码的地址
	return 0;
}

int* func() {

	int* p = new int(10); // new可以将数据开辟到堆区
	return p;	//这样才可以用指针返回一个地址数据
}
int main85()
{

	int* p = func();//这样才不会出错 可以一直保存下来数据 

	system("pause");
	return 0;



} 