#include <iostream>
using namespace std;
#include <string>

int func001(int a, int b = 20, int c = 30) { //  ע�� ���Ҫ�涨������Ĭ��ֵ ����Ҫ�����Ƿ��ں����������ȥ���� ��Ȼ�ǲ������е� ʵ��Ҫ�����βκ�
	return a + b + c;
}

int func002(int a, int b);

int func003(int a, int) { // ����ֻд�������� ռλ�� ���ǵ��ú�����ʱ����벹��

	return a;
}

int main95()
{
	cout << func001(10) << endl;
	cout << func001(10, 10, 10) << endl; // Ĭ��ֵ�ǿ��Ա�����ֵ�滻���ģ�
	system("pause");
	return 0;
}

int func002(int a, int b = 10) { // ����������ʵ�ֺ���ֻ����һ����Ĭ��ֵ ��Ȼ���������ͻ

	return a + b;
}