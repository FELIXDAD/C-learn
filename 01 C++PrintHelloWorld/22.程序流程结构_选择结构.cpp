#include <iostream>
using namespace std;
#include <string>
int main22()
{

	//选择结构 
	//用户输入分数，如果分数大于600，视为考上一本，在屏幕上输出

	//1.用户输入分数
	int score = 0;
	cout << "请输入一个分数:";//endl为换行有时候可以不加
	cin >> score;

	//2.打印用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3.判断分数是否大于600，如果大于，那么输出
	if (score > 600) { 	//if后不要加分号
		cout << "恭喜您考上了一本" << endl;
		if (score > 700) {
			cout << "您可以选择清华" << endl;
		}
		else {
			cout << "您可以选择北大" << endl;
		}
	}
	else if(score > 500) {
		cout << "恭喜您考上了二本" << endl;
	}
	else {
		cout << "没考上大学" << endl;
	}
	system("pause");

	return 0;



}