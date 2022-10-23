#include "swap.h" //双引号代表这是一个自定义函数

void swap(int num1, int num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

}
