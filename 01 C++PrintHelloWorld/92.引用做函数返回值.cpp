#include <iostream>
using namespace std;
#include <string>

// ��Ҫ��Ϊ�ֲ�����������
int& test001() {

	int a = 10;
	return a; // ��Ϊ�ֲ���������ͻᱻ�ͷ��� ��Ҫ������
}
// �����ĵ��ÿ�����Ϊ��ֵ
int& test002() {

	static int a = 10; //��Ϊ��̬���� �����ȫ���� ֻ�г��������Ż��ͷ�
	return a;
}

int main92()
{
	//int& ref = test01(); //��Ҫ������
	int& ref = test002();

	test002() = 1000; //��ʱ������������Ϊһ��a�ı��������õĲ��� ���� a = 1000��ͬʱ��һ��refҲ��test002�ı��� ����Ҳ�ᱻͬ���޸�
	//֪���������
	system("pause");
	return 0;
}