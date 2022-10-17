#include <iostream>
using namespace std;
#include <string>




struct student4 {

	int id;
	int age;
	float score;

};

// 值传递
void printStudent(student4 name) {
	cout << "在子函数中打印：" << name.id << name.age << name.score << endl;

	//值传递数值修改仅限于局部函数 并不会影响外部实参
	name.age = 40;

}

//地址传递 
void printStudent2(student4* name) {
	cout << "在子函数2中打印：" << name->id << name->age << name->score << endl;
	//地址传递好处1 是可以在子函数内修改直接修改内存 也就是实参
	//地址传递好处2 节省内存空间 值传递是在内存中划分一块区域去接受传入的数据 当传入的数据有成千上万个的时候就会卡 
	//			  而地址只有一份 可以巨幅缩短内存使用空间 不会复制新的副本 相当于克隆的实例
	name->age = 30;
}

int main68()
{

	student4 liu = { 123,20,100 };
	
	//cout << liu.id << liu.age << liu.score << endl;
	printStudent(liu);

	//使用值传递的时候记得使用取址符&
	printStudent2(&liu);

	cout << "在主函数函数中打印：" << liu.id << liu.age << liu.score << endl;
	system("pause");

	return 0;



}
