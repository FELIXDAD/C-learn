#include <iostream>
using namespace std;
#include <string>


//switchȱ�� ֻ���ж����������ַ��� ��������һ������
	  //�ŵ� �ṹ���� ִ��Ч�� ��

int main30()
{
	//��һ����Ӱ���
	// 10-9 ����
	// 8-7  �ǳ���
	// 6-5  һ��
	// С��5 ��Ƭ

	int score = 0;
	cout << "����Ӱ��֣�";
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;// �˳���ǰ��֧ ����switch
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;// �˳���ǰ��֧ ����switch
	case 8:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;// �˳���ǰ��֧ ����switch
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;// �˳���ǰ��֧ ����switch
	case 6:
		cout << "����Ϊ��һ��ĵ�Ӱ" << endl;
		break;// �˳���ǰ��֧ ����switch
	case 5:
		cout << "����Ϊ��һ��ĵ�Ӱ" << endl;
		break;// �˳���ǰ��֧ ����switch
	default:
		cout << "����Ϊ����Ƭ" << endl;
		break;// �˳���ǰ��֧ ����switch
	}


	system("pause");

	return 0;



}