#include <iostream>
using namespace std;
#include <string>

//����������
//��ǰ���߱����������Ĵ��� �������ú��������� ���߱���������ôһ������������ �����ں���
//��������д��� ���Ƕ���ֻ��дһ��
int max(int a, int b);


int main54()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	

	system("pause");

	return 0;



}

//�ȽϺ��� ʵ�������������ֽ��бȽ� ���ؽϴ��ֵ
int max(int a, int b) {
	return a > b ? a : b;
}