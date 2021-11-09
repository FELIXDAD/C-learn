#include <iostream>
using namespace std;
#include <string>
int main42()
{

	// 1、数据类型 数组名【数组长度】
	int arr[5];
	//给数组元素进行赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数组元素
	cout << arr[0] << endl;

	//2、数据类型 数组名【数组长度】{数组内容）
	int arr2[5] = { 10,20,30,40,50 }; //如果没有把数值填满
									  //他会自动用0来填充
	cout << arr2[2] << endl;
	cout << "整个数组占用内存空间为：" << sizeof(arr2) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr2[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr2) / sizeof(arr2[0]) << endl;
	cout << "数组在内存的首地址是：" << (int)arr<<endl;//默认16进制 (int)强行转换成十进制
	cout << "数组中的某个元素在内存的首地址是：" << (int)&arr[1];//&为寻址字符
	//arr = 100 数组名字是常量 不可以赋值哦
												
												//3、数据类型 数组名[]{值}
	int arr3[]{ 90,80,70,60,50 }; //必须定义内容 否则程序无法知道数组长度
	system("pause");

	return 0;



}