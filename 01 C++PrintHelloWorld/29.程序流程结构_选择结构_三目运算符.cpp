#include <iostream>
using namespace std;
#include <string>
int main29()
{

	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);//a�Ƿ����b����Ƿ���a������Ƿ���b
	//��C++����Ŀ��������ص��Ǳ���Ҳ��˵���ˣ����Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");

	return 0;



}