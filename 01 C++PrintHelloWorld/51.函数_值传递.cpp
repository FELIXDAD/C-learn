#include <iostream>
using namespace std;
#include <string>

void swap2(int num1, int num2) {
	cout << "swap before:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "swap after:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

}

int main51()
{
	int a = 10;
	int b = 20;

	
	swap2(a, b); 
	//��ֵ���ݵ�ʱ�������βη����ı� ������Ӱ��ʵ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;



}