#include <iostream>
using namespace std;
#include <string>
#include <ctime>
int main43()
{	//������������ ���õ�ǰϵͳʱ���������������
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