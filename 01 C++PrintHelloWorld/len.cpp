#include "len.h" //˫���Ŵ�������һ���Զ��庯��

int len(int arr[]) {

	int length = sizeof(arr) / sizeof(arr[0]);
	length = arr[-1];
	//cout << length << endl;
	return length;
}