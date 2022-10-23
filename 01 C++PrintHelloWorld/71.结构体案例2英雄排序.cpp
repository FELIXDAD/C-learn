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
		string sexprint = "男";
		if (hArray[i].sex != 1) { sexprint = "女"; }
		cout << "姓名：	" << hArray[i].name <<
			"年龄：	" << hArray[i].age <<
			"性别：	" << sexprint << endl;
	}
}

int main71()
{
	hero sanguo[] = {
		{"刘备",23,1},
		{"关羽",22,1},
		{"张飞",20,1},
		{"赵云",21,1},
		{"貂蝉",19,0},
	};
	bubbleSort(sanguo, 5);
	printhero(sanguo, 5);
	system("pause");
	return 0;



}