#include <iostream>
using namespace std;
#include <string>
int main18()
{
	   
	//ǰ�õ���
	int a = 10;
	++a;
	cout << a << endl;

	//���õ���
	int b = 10;
	b++;
	cout << b << endl;

	//ǰ�úͺ��õ����� 
	//ǰ�õ��� ���ñ��� +1 �ڽ��б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << a2 << endl;
	cout << b2 << endl;

	//���õ��� ���ñ��� +1 �ڽ��б��ʽ����
	int a3 = 10;
	int b3 = a3++ * 10;		//��������a3����������� �ٰ���ֵ�Ӹ�a3
	cout << a3 << endl;		//11
	cout << b3 << endl;		//100
	system("pause"); 

	return 0;



}