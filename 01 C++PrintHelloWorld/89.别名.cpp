#include <iostream>
using namespace std;
#include <string>


int main89()
{

	//���õĻ����﷨ 
	//�������� &���� = ԭ����
	int a = 10;
	int c = 20;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 20;//�Ա�����ԭ�����޸Ķ���ͬ��Ӱ��˴�
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	//int& d; //���ñ���Ҫ��ʼ�� ��Ȼ�ǷǷ��ģ�
	//int&b = c;//����һ��ָ���� �Ͳ����ٸ���ָ��

	system("pause");
	return 0;



}