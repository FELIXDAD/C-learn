#include <iostream>
using namespace std;
#include <string>
#include <ctime>
int main43()
{	//添加随机数种子 利用当前系统时间生成随机数种子
	srand((unsigned int)time(NULL));
	int pig[80];
	int h = 0;
	for (h = 0; h < 20; h++) {
		pig[h] = rand();
		cout << pig[h]<<" ";
	}
	cout << endl;
	int max = 0;
	for (int i = 0; i < h; i++) {
		max = max > pig[i] ? max : pig[i];
	}
	cout << "The max pig is :" << max << endl;
	system("pause");


	return 0;



}