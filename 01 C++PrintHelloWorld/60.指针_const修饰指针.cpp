#include <iostream>
using namespace std;
#include <string>
int main60()
{
	int a = 10;
	int b = 20;
	//const����ָ��
	const int* p = &a;
	//*p = 20;�˲����������� ����ָ����� ָ��ָ��
	p = &b;

	system("pause");

	return 0;



}