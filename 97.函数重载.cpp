#include <iostream>
using namespace std;
#include <string>

int length(int a, int b) { // ���������Ը��ݹ��� ʹ��ͬ���ĺ�������ͬ�Ĳ������ͻ��߲�ͬ��������������ͬ������ ע��Ҫ��ͬһ���������� ���綼��main����
	return a + b;
}
float length(float a, float b) {
	return sin(a) + cos(b);
}


int func005(int& a) {

	cout << "��const" << endl;
}

int func005(const int& a) {

	cout << "const" << endl;
}

int func006(int a) {

	cout << "��const" << endl;
}

int func006(int a,int b =10) {

	cout << "const" << endl;
}
int main()
{
	int s = 1, b = 2;
	float x = 3, y = 5;
	cout << length(s,b) << endl;
	cout << length(x, y) << endl;
	int aa = 10;
	func005(aa); // ���������ʵ�����Ի��ߵ�һ�� 
	func005(10); // ���û��ʵ�� �������ͻ�ѡ�����constȥʹ��
	func006(10);// �ⴿ���Ҳ� ���������Ͳ�Ҫ�� 
	system("pause");
	return 0;
}
