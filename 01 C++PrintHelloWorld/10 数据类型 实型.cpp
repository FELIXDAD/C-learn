#include <iostream>
using namespace std;

int main10()
{

	float a = 3.14f;//单精度 一般为了优化在数据后加个f 防止数据自动变成双精度
	double b = 3.14;//双精度
	float c = 3e2;//科学计数法 3* 10^2 e后如果是负数则是0.1的次方


	cout << sizeof(b) << endl;

	system("pause");

	return 0;



}