#include <iostream>
using namespace std;
#include <string>
int main47()
{
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}

	};
	string names[3] = { "tom","jack","gay" };
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum = sum + scores[i][j];
		}
		cout <<names[i]<< "`s score is:" << sum << endl;
		
	}


	system("pause");

	return 0;



}															