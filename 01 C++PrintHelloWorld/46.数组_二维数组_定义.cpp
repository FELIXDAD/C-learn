#include <iostream>
using namespace std;
#include <string>
int main()
{
	//��ά���� ��һ��Ϊ�� �ڶ���Ϊ��

	//��һ��������ʽֻд����
	int arr[2][3];
	arr[0][0] = 1;

	//�ڶ���������ʽ �ɶ���ǿ �Ƽ�ʹ�����
	//{
	//	{1,2,3}
	//	{4,5,6}
	//}
	int arr2[2][3] = { {1,2,3},{4,5,6} };

	//�����ֶ��巽�� ����Ҫ�����м������ �ó����Զ�������������
	int arr3[2][3] = {1,2,3,4,5,6};

	//�����ֶ��巽�� ����д���� ������Զ�����
	int arr4[][3] = { 1,2,3,4,5,6 };

	cout << arr2[2] << endl;
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr2) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr2[0]) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr2[0][0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ��" << sizeof(arr2) / sizeof(arr2[0][0]) << endl;
	cout << "������Ԫ�ص�����Ϊ��" << sizeof(arr2) / sizeof(arr2[0]) << endl;
	cout << "������Ԫ�ص�����Ϊ��" << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
	cout << "�������ڴ���׵�ַ�ǣ�" << (int)arr2 << endl;//Ĭ��16���� (int)ǿ��ת����ʮ����
	cout << "�����е�ĳ��Ԫ�����ڴ���׵�ַ�ǣ�" << (int)&arr2[1];//&ΪѰַ�ַ�

	system("pause");
	return 0;



}