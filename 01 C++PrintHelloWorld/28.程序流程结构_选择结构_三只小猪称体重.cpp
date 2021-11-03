#include <iostream>
using namespace std;
#include <string>
int main28()
{
	float pig_a = 0;
	float pig_b = 0;
	float pig_c = 0;
	cout << "请输入第一只猪的重量：" ;
	cin >> pig_a ;
	cout << "请输入第二只猪的重量：";
	cin >> pig_b;
	cout << "请输入第三只猪的重量：";
	cin >> pig_c;

	if (pig_a >= pig_b) {
		if (pig_a > pig_b) {
			if (pig_a > pig_c) {
				cout << "第一只猪最重" << endl;
			}
			else if (pig_a = pig_c) {
				cout << "第一只和第三只猪最重" << endl;
			}
			else {
				cout << "第三只猪最重" << endl;
			}
		}
		else if (pig_a == pig_b)
		{
			if (pig_a > pig_c) {
				cout << "第一只和第二只猪最重" << endl;
			}
			else if (pig_a == pig_c) {
				cout << "三只猪一样重" << endl;
			}
			else {
				cout << "第三只猪最重" << endl;
			}
		}
	}
	else {
		if (pig_b > pig_c) {
			cout << "第二只猪最重" << endl;
		}
		else if (pig_b == pig_c) {
			cout << "第二只和第三只猪最重" << endl;
		}
		else {
			cout << "第三只猪最重" << endl;
		}
	}
	system("pause");

	return 0;



}