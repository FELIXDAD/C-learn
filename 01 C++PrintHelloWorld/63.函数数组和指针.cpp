#include <iostream>
using namespace std;
#include <string>
#include "len.h"

void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}

void arrayPrint(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}
int main63()
{
	int arr[] = { 123,453,12,341,23,123,12,423,325,235,234,2,34,2,45671,23513476,435,123,4,327,34,56,23,412,3,875,496,7,234,2,34 };
	int lens = sizeof(arr) / sizeof(arr[0]);

	//int lens = len(arr);
	bubbleSort(arr, lens);
	arrayPrint(arr, lens);

	system("pause");

	return 0;



}