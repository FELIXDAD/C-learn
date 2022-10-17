#include <iostream>
using namespace std;
#include <string>




struct student5 {

	int id;
	int age;
	float score;

};

void printStudent3(const student5* name) {
	cout << "在子函数中打印：" << name->id << name->age << name->score << endl;

	//地址传递好处1 是可以在子函数内修改直接修改内存 也就是实参
	//地址传递好处2 节省内存空间 值传递是在内存中划分一块区域去接受传入的数据 当传入的数据有成千上万个的时候就会卡 
	//			  而地址只有一份 可以巨幅缩短内存使用空间 不会复制新的副本 相当于克隆的实例
	
	//但有时候我们不想让地址传递修改所接受的结构体或其他类型数值 防止误操作 就可以在获取变量前加上const 将他改为常量
	// name->age = 40; //此时如果再有对外部修改的操作就会报错
	
}

int main69()
{
	student5 liu = { 123,20,100 };
	printStudent3(&liu);

	system("pause");
	return 0;



}
