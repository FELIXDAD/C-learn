#include <iostream>
using namespace std;
#include <string>



int* func1(){
	int a = 10;
	//return &a; //���ھֲ���������ջ�� �����������к�ͻ����� ��������ֻ���ڵ�һ��ʱ����ȷ���� һ�����������ͻ�������ĵ�ַ
	return 0;
}

int* func() {

	int* p = new int(10); // new���Խ����ݿ��ٵ�����
	return p;	//�����ſ�����ָ�뷵��һ����ַ����
}
int main85()
{

	int* p = func();//�����Ų������ ����һֱ������������ 

	system("pause");
	return 0;



} 