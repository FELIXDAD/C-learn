#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main32()
{
	//������������ ���õ�ǰϵͳʱ���������������
	srand((unsigned int)time(NULL));
	int suiji = rand()%100+1 ;//�Դ���α�����
	int wanjiashuru = 0;
	int cishu = 1;
	cout << "�����ִ�С��";
	cin >> wanjiashuru;
	while (suiji != wanjiashuru)
	{
		cishu++;
		if (cishu > 5) { break; }
		if (suiji > wanjiashuru) {
			cout << "��С�������˲�" << endl;
		}
		else {
			cout << "�´�����С�˲�" << endl;
		}
		cin >> wanjiashuru;

	}
	if (cishu == 6) {
		cout << "��û���� ��Ϸʧ��" << endl;
	}
	else if(cishu == 1){
		cout << "һ�ξ���̫ţ��" << endl;
	}
	else {
		cout << "�¶���" << endl;
	}

	system("pause");

	return 0;



}