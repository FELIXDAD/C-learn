#include <iostream>
using namespace std;
#include <string>
int main34()
{

	//水仙花数是指一个三位数 他每个位上的数字的三次幂之和等于他本身

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