#include <iostream>
using namespace std;
#include <string>

// new�Ļ����﷨
int* func001() {
	 //�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10); //new����ʲô�������� ��Ӧ����ʲô������������ȥ������
	string* str = new string("��������������ָ��");

	int* arr = new int[10]; // ���ڷ��ص��ǵ�ַ ��������ͻ�����ָ����ܾͺ�
	arr[0] = 10;			// ����Ĳ����ͳ���һ��

	return p;

	//�����Ҫ�ͷŶ������� ʹ�ùؼ��� delete
	delete p; //�ͷź� ���޷������� ���ڷǷ�������

	delete[] arr; //�ͷ�����ǰ��Ӹ������ž���
}

void test001() {
	int* p = func001();
	cout << *p << endl;

}




int main88()
{

	test001();

	

	

	system("pause");
	return 0;



}