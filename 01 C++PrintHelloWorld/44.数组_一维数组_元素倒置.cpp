#include <iostream>
using namespace std;
#include <string>
#include <ctime>
int main44()
{	//添加随机数种子 利用当前系统时间生成随机数种子
	srand((unsigned int)time(NULL));
	cout << "How many number will be reverse:" << endl;
	int numberlength;
	cin >> numberlength;
	int randnum[100];
	int start = 0;
	int end = numberlength - 1;

	cout << "Original Array: ";

	for (int h = 0; h < numberlength; h++) {
		randnum[h] = rand();
		if (h % 10 == 0) { cout << endl; }
		cout << randnum[h] << " ";
	}

	int temp = 0;
	cout << endl << "Reverse Array: ";
	while (start < end)
	{	
		temp = randnum[start];
		randnum[start] = randnum[end];
		randnum[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < numberlength; i++) {
		if (i % 10 == 0) { cout << endl; }
		cout << randnum[i] << " ";
	}

	system("pause");
	return 0;



}