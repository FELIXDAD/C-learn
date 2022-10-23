#include <iostream>
using namespace std;
#include <string>

// 创建学生数据类型 学生包括（姓名，年龄，分数）

//创建方式
struct student0 {
	//成员列表
	string name;
	int age;
	float score;

};


int main64()
{
	//创建变量方式1 清晰 方便管理
	student0 L1;
	L1.name = "张三";
	L1.age = 23;
	L1.score = 100;
	//创建变量方式2 简洁 高效
	struct student0 L2 { "李四", 23, 13.2 };
	cout << "姓名：" << L1.name << "年龄：" << L1.age << "分数：" << L1.score << endl;


	system("pause");

	return 0;



}