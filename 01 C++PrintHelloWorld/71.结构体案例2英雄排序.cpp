#include <iostream>
using namespace std;
#include <string>


struct hero {
	string name;
	int age;
	bool sex;

};

void bubbleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j].age > arr[j + 1].age) {
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}

void printhero(hero hArray[], int len) {
	for (int i = 0; i < len; i++) {
		string sexprint = "��";
		if (hArray[i].sex != 1) { sexprint = "Ů"; }
		cout << "������	" << hArray[i].name <<
			"���䣺	" << hArray[i].age <<
			"�Ա�	" << sexprint << endl;
	}
}

int main71()
{
	hero sanguo[] = {
		{"����",23,1},
		{"����",22,1},
		{"�ŷ�",20,1},
		{"����",21,1},
		{"����",19,0},
	};
	bubbleSort(sanguo, 5);
	printhero(sanguo, 5);
	system("pause");
	return 0;



}