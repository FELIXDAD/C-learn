#include <iostream>
using namespace std;
#include <string>
int main40()
{
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;//�����ż��ֱ��������� 
			//continue����������ѭ��ʣ�ಿ��
		}
		cout << i << endl;
	}


	system("pause");

	return 0;



}