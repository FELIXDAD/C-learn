#include <iostream>
using namespace std;
#include <string>
int main39()
{
	//break��ʹ��ʱ��
	/*
	// 1��������switch�����
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	int select = 0;//����ѡ�����
	cin >> select;//�ȴ��û�����

	switch (select) {
	case 1:
		cout << "��ѡ�������ͨģʽ"<<endl;
		break;
	case 2:
		cout << "��ѡ������е�ģʽ" << endl;
		break;
	case 3:
		cout << "��ѡ���������ģʽ" << endl;
		break;
	default:
		break;
	}
	*/

	// 2��������ѭ�������
	/*for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;// �˳�ѭ��
		}
		cout << i << endl;
	}
	*/

	// 3��������Ƕ��ѭ�������

	for (int i = 0; i < 10; i++) { // ���ѭ��
		for (int h = 0; h < 9; h++) {// �ڲ�ѭ��
			if (h == 5) {
				break;//�˳��ڲ�ѭ�� }
				cout << "* ";
			}
			cout << "* " << endl;
		}
		system("pause");

		return 0;


	}
}