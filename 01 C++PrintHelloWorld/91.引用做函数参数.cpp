#include <iostream>
using namespace std;
#include <string>

void swap01(int num1, int num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;


}

void swap03(int& a, int& b) { //���ô��� �βλ��޸�ʵ�� ����������������������ַ ĳЩ����Ͳ���Ҫʹ��ָ�� Ҳ��
	int temp = a;			  //ԭ�� �����ǿ������ñ���� �����޸�����ͬʱҲ���޸�ԭ��ʵ�ε����� ���ɴ���ں�����ȥ�޸�ʵ�� �������Ϊָ�볣��
	a = b;
	b = temp;

}

int main91()
{	
	int a = 10;
	int b = 20;
	swap01(a,b); //ֵ���ݲ����޸�ʵ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	swap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}