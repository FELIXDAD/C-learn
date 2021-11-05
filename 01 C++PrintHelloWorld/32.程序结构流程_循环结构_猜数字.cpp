#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main32()
{
	//添加随机数种子 利用当前系统时间生成随机数种子
	srand((unsigned int)time(NULL));
	int suiji = rand()%100+1 ;//自带的伪随机数
	int wanjiashuru = 0;
	int cishu = 1;
	cout << "猜数字大小：";
	cin >> wanjiashuru;
	while (suiji != wanjiashuru)
	{
		cishu++;
		if (cishu > 5) { break; }
		if (suiji > wanjiashuru) {
			cout << "猜小了往大了猜" << endl;
		}
		else {
			cout << "猜大了往小了猜" << endl;
		}
		cin >> wanjiashuru;

	}
	if (cishu == 6) {
		cout << "你没猜中 游戏失败" << endl;
	}
	else if(cishu == 1){
		cout << "一次就中太牛了" << endl;
	}
	else {
		cout << "猜对了" << endl;
	}

	system("pause");

	return 0;



}