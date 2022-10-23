#include <iostream>
using namespace std;
#include <string>


struct student2 {

	string name;
	int age;
	float score;

};


int main66()
{

	//创建学生结构体变量
	student2 somebody = { "wang",10,100 };

	//使用指针指向结构体变量
	student2* p = &somebody;

	//通过指针访问结构体变量中的数据
	cout << p->name << endl;
	// 结构体指针可以使用 -> 来访问结构体中的成员
	system("pause");

	return 0;



}