#include <iostream>
using namespace std;
#include <string>
int main36()
{

	for (int i = 1; i < 100; i++) {
		if (i / 10 == 7) {
			cout << "������" << endl;
		}
		else if (i % 7 == 0) {
			cout << "������" << endl;
		}
		else if (i % 10 == 7) {
			cout << "������" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");

	return 0;



}