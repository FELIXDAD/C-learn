#include <iostream>
using namespace std;

int main08()
{
	// short 短整型 （-32768 ~ 32767）
	// 如果超出了这个范围 则会数据溢出例如32767会被溢出为-32768
	
	short int a = 32769;
	cout << a << endl;

	system("pause");

	return 0;



}