#include <iostream>
using namespace std;
#include <string>
int main()
{

	for (int i = 0; i < 100; i++) {
		if (i == 10)
		{
			break;//break; break可以跳出循环 也可以中断Switch
		}
		cout << i << endl;
	}

	system("pause");

	return 0;



}