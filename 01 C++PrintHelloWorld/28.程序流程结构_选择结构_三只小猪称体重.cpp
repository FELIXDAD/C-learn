#include <iostream>
using namespace std;
#include <string>
int main28()
{
	float pig_a = 0;
	float pig_b = 0;
	float pig_c = 0;
	cout << "�������һֻ���������" ;
	cin >> pig_a ;
	cout << "������ڶ�ֻ���������";
	cin >> pig_b;
	cout << "���������ֻ���������";
	cin >> pig_c;

	if (pig_a >= pig_b) {
		if (pig_a > pig_b) {
			if (pig_a > pig_c) {
				cout << "��һֻ������" << endl;
			}
			else if (pig_a = pig_c) {
				cout << "��һֻ�͵���ֻ������" << endl;
			}
			else {
				cout << "����ֻ������" << endl;
			}
		}
		else if (pig_a == pig_b)
		{
			if (pig_a > pig_c) {
				cout << "��һֻ�͵ڶ�ֻ������" << endl;
			}
			else if (pig_a == pig_c) {
				cout << "��ֻ��һ����" << endl;
			}
			else {
				cout << "����ֻ������" << endl;
			}
		}
	}
	else {
		if (pig_b > pig_c) {
			cout << "�ڶ�ֻ������" << endl;
		}
		else if (pig_b == pig_c) {
			cout << "�ڶ�ֻ�͵���ֻ������" << endl;
		}
		else {
			cout << "����ֻ������" << endl;
		}
	}
	system("pause");

	return 0;



}