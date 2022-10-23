#include <iostream>
using namespace std;
#include <string>
#include <ctime>


struct student {

	string sName;
	int age;
	float score;

};

struct teacher {
	string tName;
	student sArray[5];

};

void allocateSpace(teacher tArray[], int len) {

	//一个文本技巧 a string tick  string本身也是一个数组 可以用数值去寻找位数并提取
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++) {

		tArray[i].tName = "Teacher";
		tArray[i].tName += nameSeed[i];
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student";
			tArray[i].sArray[j].sName += nameSeed[j];
			//cout << "请输入第" << i << "名老师的第" << j << "名学生的年龄：" << endl;
			//cin >> tArray[i].sArray[j].age;
			//cout << "请输入第" << i << "名老师的第" << j << "名学生的分数：" << endl;
			//cin>> tArray[i].sArray[j].score;
			int random = rand() % 3 + 10;
			tArray[i].sArray[j].age = random;
			random = rand() % 60 + 40;//40~100;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printInfo(teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师姓名：	" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名： " << tArray[i].sArray[j].sName <<
				"\t学生年龄： " << tArray[i].sArray[j].age <<
				"\t学生分数： " << tArray[i].sArray[j].score << endl;
		}
	}
}


int main70()
{
	//真随机数种子
	srand((unsigned int)time(NULL));
	//创建三名老师
	teacher teachergroup1[3];
	int len = sizeof(teachergroup1) / sizeof(teachergroup1[0]);
	//通过函数给老师和学生信息赋值
	allocateSpace(teachergroup1, len);
	//打印所有老师以及带的学生信息
	printInfo(teachergroup1, len);


	system("pause");
	return 0;



}