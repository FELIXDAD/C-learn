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
		{"����",10,100},
		{"����",11,90},
		{"����",10,110},
	};

	school1[2].name = "����";

	for (int i = 0; i < 3; i++) {
		cout << " ������" << school1[i].name
			 << " ���䣺" << school1[i].age 
			 << " ������" << school1[i].score << endl;
		}
	

	system("pause");

	return 0;



}
