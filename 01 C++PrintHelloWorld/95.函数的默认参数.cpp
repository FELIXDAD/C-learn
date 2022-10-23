#include <iostream>
using namespace std;
#include <string>

int func001(int a, int b = 20, int c = 30) { //  注意 如果要规定函数的默认值 则需要把他们放在函数的最后面去定义 不然是不能运行的 实参要放在形参后
	return a + b + c;
}

int func002(int a, int b);

int func003(int a, int) { // 可以只写数据类型 占位置 但是调用函数的时候必须补上

	return a;
}

int main95()
{
	cout << func001(10) << endl;
	cout << func001(10, 10, 10) << endl; // 默认值是可以被传入值替换掉的；
	system("pause");
	return 0;
}

int func002(int a, int b = 10) { // 声明函数和实现函数只能有一个有默认值 不然会编译器冲突

	return a + b;
}