#include <iostream>
using namespace std;
#include <string>

void showValue(const int& val) { // ��ֵ��ռ�ռ� �����ֲ����и������ ���Կ����� const ȥ���������� ���ú���������޸�
	//val = 1000;
	cout << val << endl;
}

int main94()
{
	int a = 10;
	int& aa = a;
	//������֪ ���ñ���Ҫ��һ��Ϸ����ڴ��ַ������ Ҳ���Ǳ���ָ��һ������

	//���������������������Ϊ������������ִ���˲��� int temp = 10; int& ref = temp;
	const int& ref = 10; 

	int b = 100;

	showValue(b);
	system("pause");
	return 0;
}


// �ܽ� �������������Ǽ򻯰��ָ��  �������ĳ������ȥ�޸�ʵ�� ֱ���ں��������ϴ���&����ȥʹ�� ����houdini����Ǹ�����һ��