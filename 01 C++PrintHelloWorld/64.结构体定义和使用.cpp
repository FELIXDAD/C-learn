#include <iostream>
using namespace std;
#include <string>

// ����ѧ���������� ѧ�����������������䣬������

//������ʽ
struct student0 {
	//��Ա�б�
	string name;
	int age;
	float score;

};


int main64()
{
	//����������ʽ1 ���� �������
	student0 L1;
	L1.name = "����";
	L1.age = 23;
	L1.score = 100;
	//����������ʽ2 ��� ��Ч
	struct student0 L2 { "����", 23, 13.2 };
	cout << "������" << L1.name << "���䣺" << L1.age << "������" << L1.score << endl;


	system("pause");

	return 0;



}