#include "len.h" //双引号代表这是一个自定义函数

int len(int arr[]) {

	int length = sizeof(arr) / sizeof(arr[0]);
	cout << length << endl;
	return length;
}