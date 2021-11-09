#include <iostream>
using namespace std;
#include <string>
int main()
{
	//二维数组 第一个为行 第二个为列

	//第一种命名方式只写长度
	int arr[2][3];
	arr[0][0] = 1;

	//第二种命名方式 可读性强 推荐使用这个
	//{
	//	{1,2,3}
	//	{4,5,6}
	//}
	int arr2[2][3] = { {1,2,3},{4,5,6} };

	//第三种定义方法 不需要划分中间的括号 让程序自动填入区分行列
	int arr3[2][3] = {1,2,3,4,5,6};

	//第四种定义方法 不用写行数 程序会自动补齐
	int arr4[][3] = { 1,2,3,4,5,6 };

	cout << arr2[2] << endl;
	cout << "整个数组占用内存空间为：" << sizeof(arr2) << endl;
	cout << "每行元素占用内存空间为：" << sizeof(arr2[0]) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr2[0][0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr2) / sizeof(arr2[0][0]) << endl;
	cout << "数组中元素的行数为：" << sizeof(arr2) / sizeof(arr2[0]) << endl;
	cout << "数组中元素的列数为：" << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
	cout << "数组在内存的首地址是：" << (int)arr2 << endl;//默认16进制 (int)强行转换成十进制
	cout << "数组中的某个元素在内存的首地址是：" << (int)&arr2[1];//&为寻址字符

	system("pause");
	return 0;



}