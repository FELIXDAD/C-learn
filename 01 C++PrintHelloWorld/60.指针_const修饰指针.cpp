#include <iostream>
using namespace std;
#include <string>
int main()
{
	//const ����ָ�� ����ָ��

	int a = 10;
	int b = 20;
	//const����ָ�� ֻ�����޸�ָ��ָ��ĵ�ַ ���ǲ������޸ı�ָ��ָ���ֵ
	const int* p = &a;
	//*p = 20;�˲������ɱ����� ����ָ����� ָ��ָ��
	p = &b;


	//const ���γ��� ָ�볣�� ָ��ָ�򲻿��Ը� ָ��ָ���ֵ���Ը� ������������෴
	int* const o = &a;

	//*o = &b;�˲������ɱ����� 
	*o = b;


	//const ������ָ�������γ��� ָ��ָ���ָ���ֵ�������޸�
	const int* const o = &a;

	//*o = &b;�˲������ɱ����� 
	//*o = b; �˲���Ҳ���ɱ�����


	cout << o  << endl;
	system("pause");

	return 0;



}