#include <iostream>
using namespace std;
#include <string>
int main22()
{

	//ѡ��ṹ 
	//�û���������������������600����Ϊ����һ��������Ļ�����

	//1.�û��������
	int score = 0;
	cout << "������һ������:";//endlΪ������ʱ����Բ���
	cin >> score;

	//2.��ӡ�û�����ķ���
	cout << "������ķ���Ϊ:" << score << endl;

	//3.�жϷ����Ƿ����600��������ڣ���ô���
	if (score > 600) { 	//if��Ҫ�ӷֺ�
		cout << "��ϲ��������һ��" << endl;
		if (score > 700) {
			cout << "������ѡ���廪" << endl;
		}
		else {
			cout << "������ѡ�񱱴�" << endl;
		}
	}
	else if(score > 500) {
		cout << "��ϲ�������˶���" << endl;
	}
	else {
		cout << "û���ϴ�ѧ" << endl;
	}
	system("pause");

	return 0;



}