#include <iostream>
using namespace std;
#include <string>




struct student5 {

	int id;
	int age;
	float score;

};

void printStudent3(const student5* name) {
	cout << "���Ӻ����д�ӡ��" << name->id << name->age << name->score << endl;

	//��ַ���ݺô�1 �ǿ������Ӻ������޸�ֱ���޸��ڴ� Ҳ����ʵ��
	//��ַ���ݺô�2 ��ʡ�ڴ�ռ� ֵ���������ڴ��л���һ������ȥ���ܴ�������� ������������г�ǧ�������ʱ��ͻῨ 
	//			  ����ַֻ��һ�� ���Ծ޷������ڴ�ʹ�ÿռ� ���Ḵ���µĸ��� �൱�ڿ�¡��ʵ��
	
	//����ʱ�����ǲ����õ�ַ�����޸������ܵĽṹ�������������ֵ ��ֹ����� �Ϳ����ڻ�ȡ����ǰ����const ������Ϊ����
	// name->age = 40; //��ʱ������ж��ⲿ�޸ĵĲ����ͻᱨ��
	
}

int main69()
{
	student5 liu = { 123,20,100 };
	printStudent3(&liu);

	system("pause");
	return 0;



}
