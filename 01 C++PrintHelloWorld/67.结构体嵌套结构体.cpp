#include <iostream>
using namespace std;
#include <string>




struct student3 {

	string name;
	int age;
	float score;

};

struct teacher3 {


	int id;
	int age;
	student3 stu;

};

int main67()
{
	///嵌套创建1
	teacher3 liu = { 114514,23,{"先辈",10,100} };

	//嵌套创建2
	teacher3 wang;
	wang.id = 123;
	wang.age = 20;
	wang.stu.name = "liu";
	wang.stu.age = 23;
	wang.stu.score = 100;
	//使用嵌套结构体时候可以用两个点去创建

	// 可以用这种形式去修改结构体的子结构体数据 应用场景比如给一个角色修改武器结构变量
	student3 li = { "lixx",22,90 };
	wang.stu = li;

	system("pause");

	return 0;



}