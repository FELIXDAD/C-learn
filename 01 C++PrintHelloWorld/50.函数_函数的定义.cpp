#include <iostream>
using namespace std;
#include <string>


//ʵ��һ���ӷ����� ���ܴ��������������� ����������ӵĽ��������
//����Ҫд��main���治Ȼ�ᱨ��
//���������ʱ��num1��num2��û����ʵ���� ֻ����ʽ�ϵĲ��� ����β�
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 0;
	int b = 0;
	cout << "input two number to sum:" << endl;
	cin >> a;
	cin >> b;

	int c = add(a, b);
	cout << c;


	system("pause");

	return 0;



}