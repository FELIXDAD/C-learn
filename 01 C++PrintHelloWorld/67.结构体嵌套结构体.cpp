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
	///Ƕ�״���1
	teacher3 liu = { 114514,23,{"�ȱ�",10,100} };

	//Ƕ�״���2
	teacher3 wang;
	wang.id = 123;
	wang.age = 20;
	wang.stu.name = "liu";
	wang.stu.age = 23;
	wang.stu.score = 100;
	//ʹ��Ƕ�׽ṹ��ʱ�������������ȥ����

	// ������������ʽȥ�޸Ľṹ����ӽṹ������ Ӧ�ó��������һ����ɫ�޸������ṹ����
	student3 li = { "lixx",22,90 };
	wang.stu = li;

	system("pause");

	return 0;



}