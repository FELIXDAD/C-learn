#include <iostream>
using namespace std;
#include <string>
int main34()
{

	//ˮ�ɻ�����ָһ����λ�� ��ÿ��λ�ϵ����ֵ�������֮�͵���������

	int shuixianhuashu = 100;
	int jieguo = 0;
	int gewei = 0;
	int shiwei = 0;
	int baiwei = 0;

	while (shuixianhuashu < 999) {
		gewei = shuixianhuashu % 10;
		shiwei = shuixianhuashu /10%10;
		baiwei = shuixianhuashu / 100;
		jieguo = gewei * gewei * gewei + shiwei * shiwei * shiwei + baiwei * baiwei * baiwei;

		if (shuixianhuashu == jieguo ) {
			cout << jieguo << endl;
		}
		shuixianhuashu++;
	}

	system("pause");

	return 0;



}