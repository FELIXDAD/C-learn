#include <iostream>
using namespace std;
#include <string>

// new的基本语法
int* func001() {
	 //在堆区创建整形数据
	//new返回的是该数据类型的指针
	int* p = new int(10); //new的是什么数据类型 就应该用什么样的数据类型去接收他
	string* str = new string("文字类型用文字指针");

	int* arr = new int[10]; // 由于返回的是地址 所以数组就还是用指针接受就好
	arr[0] = 10;			// 数组的操作和常量一样

	return p;

	//如果想要释放堆区数据 使用关键字 delete
	delete p; //释放后 就无法访问了 属于非法操作了

	delete[] arr; //释放数组前面加个中括号就行
}

void test001() {
	int* p = func001();
	cout << *p << endl;

}




int main88()
{

	test001();

	

	

	system("pause");
	return 0;



}