#include <iostream>
using namespace std;
#include <string>

int main61()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	
	int* p = arr;
	//ָ��Ĭ�ϵ�ַ���������һ��Ԫ�صĵ�ַ
	


	for (int i=0; i < 10; i++) {
		cout << *p << endl;
		p++;//����ʹ��p++����*p++ȥƫ�ƶ�Ӧ�ֽ�ȥ��ȡ��һ��Ԫ�صĵ�ַ
	}
	
	system("pause");

	return 0;



}