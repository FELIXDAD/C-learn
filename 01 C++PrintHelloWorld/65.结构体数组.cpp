#include <iostream>
using namespace std;
#include <string>


struct student1 {

	string name;
	int age;
	float score;

};


int main65()
{
	student1 school1[] = {
		{"张三",10,100},
		{"李四",11,90},
		{"王五",10,110},
	};

	school1[2].name = "赵六";

	for (int i = 0; i < 3; i++) {
		cout << " 姓名：" << school1[i].name
			 << " 年龄：" << school1[i].age 
			 << " 分数：" << school1[i].score << endl;
		}
	

	system("pause");

	return 0;



}
