#include <iostream>
using namespace std;
#include <string>

int main61()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	
	int* p = arr;
	//指针默认地址就是数组第一个元素的地址
	


	for (int i=0; i < 10; i++) {
		cout << *p << endl;
		p++;//可以使用p++或者*p++去偏移对应字节去获取下一个元素的地址
	}
	
	system("pause");

	return 0;



}