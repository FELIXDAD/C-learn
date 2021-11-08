#include <iostream>
using namespace std;
#include <string>
int main40()
{
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;//如果是偶数直接跳过输出 
			//continue会跳过本次循环剩余部分
		}
		cout << i << endl;
	}


	system("pause");

	return 0;



}