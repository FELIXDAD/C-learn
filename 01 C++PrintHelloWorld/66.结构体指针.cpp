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

	//����ѧ���ṹ�����
	student2 somebody = { "wang",10,100 };

	//ʹ��ָ��ָ��ṹ�����
	student2* p = &somebody;

	//ͨ��ָ����ʽṹ������е�����
	cout << p->name << endl;
	// �ṹ��ָ�����ʹ�� -> �����ʽṹ���еĳ�Ա
	system("pause");

	return 0;



}