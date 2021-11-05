#include <iostream>
using namespace std;
#include <string>


//switch缺点 只能判断整数或者字符型 不可以是一个区间
	  //优点 结构清晰 执行效率 高

int main30()
{
	//给一个电影打分
	// 10-9 经典
	// 8-7  非常好
	// 6-5  一般
	// 小于5 烂片

	int score = 0;
	cout << "给电影打分：";
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;// 退出当前分支 结束switch
	case 9:
		cout << "您认为是经典电影" << endl;
		break;// 退出当前分支 结束switch
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;// 退出当前分支 结束switch
	case 7:
		cout << "您认为是非常好的电影" << endl;
		break;// 退出当前分支 结束switch
	case 6:
		cout << "您认为是一般的电影" << endl;
		break;// 退出当前分支 结束switch
	case 5:
		cout << "您认为是一般的电影" << endl;
		break;// 退出当前分支 结束switch
	default:
		cout << "您认为是烂片" << endl;
		break;// 退出当前分支 结束switch
	}


	system("pause");

	return 0;



}