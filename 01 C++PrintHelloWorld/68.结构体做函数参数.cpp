#include <iostream>
using namespace std;
#include <string>




struct student4 {

	int id;
	int age;
	float score;

};

// ֵ����
void printStudent(student4 name) {
	cout << "���Ӻ����д�ӡ��" << name.id << name.age << name.score << endl;

	//ֵ������ֵ�޸Ľ����ھֲ����� ������Ӱ���ⲿʵ��
	name.age = 40;

}

//��ַ���� 
void printStudent2(student4* name) {
	cout << "���Ӻ���2�д�ӡ��" << name->id << name->age << name->score << endl;
	//��ַ���ݺô�1 �ǿ������Ӻ������޸�ֱ���޸��ڴ� Ҳ����ʵ��
	//��ַ���ݺô�2 ��ʡ�ڴ�ռ� ֵ���������ڴ��л���һ������ȥ���ܴ�������� ������������г�ǧ�������ʱ��ͻῨ 
	//			  ����ַֻ��һ�� ���Ծ޷������ڴ�ʹ�ÿռ� ���Ḵ���µĸ��� �൱�ڿ�¡��ʵ��
	name->age = 30;
}

int main68()
{

	student4 liu = { 123,20,100 };
	
	//cout << liu.id << liu.age << liu.score << endl;
	printStudent(liu);

	//ʹ��ֵ���ݵ�ʱ��ǵ�ʹ��ȡַ��&
	printStudent2(&liu);

	cout << "�������������д�ӡ��" << liu.id << liu.age << liu.score << endl;
	system("pause");

	return 0;



}
