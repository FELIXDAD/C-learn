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

	//һ���ı����� a string tick  string����Ҳ��һ������ ��������ֵȥѰ��λ������ȡ
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++) {

		tArray[i].tName = "Teacher";
		tArray[i].tName += nameSeed[i];
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student";
			tArray[i].sArray[j].sName += nameSeed[j];
			//cout << "�������" << i << "����ʦ�ĵ�" << j << "��ѧ�������䣺" << endl;
			//cin >> tArray[i].sArray[j].age;
			//cout << "�������" << i << "����ʦ�ĵ�" << j << "��ѧ���ķ�����" << endl;
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
		cout << "��ʦ������	" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tѧ�������� " << tArray[i].sArray[j].sName <<
				"\tѧ�����䣺 " << tArray[i].sArray[j].age <<
				"\tѧ�������� " << tArray[i].sArray[j].score << endl;
		}
	}
}


int main70()
{
	//�����������
	srand((unsigned int)time(NULL));
	//����������ʦ
	teacher teachergroup1[3];
	int len = sizeof(teachergroup1) / sizeof(teachergroup1[0]);
	//ͨ����������ʦ��ѧ����Ϣ��ֵ
	allocateSpace(teachergroup1, len);
	//��ӡ������ʦ�Լ�����ѧ����Ϣ
	printInfo(teachergroup1, len);


	system("pause");
	return 0;



}