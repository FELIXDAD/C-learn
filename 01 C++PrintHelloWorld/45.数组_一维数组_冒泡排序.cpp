#include <iostream>
using namespace std;
#include <string>
#include <ctime>
int main45()
{
	//������������ ���õ�ǰϵͳʱ���������������
	srand((unsigned int)time(NULL));
	cout << "How many number will be BubbleSort:" << endl;
	int numberlength;
	cin >> numberlength;
	int randnum[100];
	int start = 0;
	int end = numberlength - 1;
	int temp = 0;
	int BubbleSort[100];
	cout << "Original Array: ";

	for (int h = 0; h < numberlength; h++) {
		BubbleSort[h] = rand()%100;
		if (h % 10 == 0) { cout << endl; }
		cout << BubbleSort[h] << " ";
	}

	cout << endl << "Sort Array: ";
	for (int i = 0; i < end; i++) {
		for (int j = 0; j < end - i; j++) {
			if (BubbleSort[j] > BubbleSort[j + 1]) {// ����С�ڿ���������
				temp = BubbleSort[j];
				BubbleSort[j] = BubbleSort[j + 1];
				BubbleSort[j + 1] = temp;
			}
		}
	}
	for (int h = 0; h < numberlength; h++) {
		cout << BubbleSort[h] << " ";
		if (h % 10 == 0) { cout << endl; }
	}
	system("pause");

	return 0;



}