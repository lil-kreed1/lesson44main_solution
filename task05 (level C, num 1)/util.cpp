#include "util.h"

void user_init(int arr[SIZE], int length) {
	cout << "input your array elements: ";
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}

void print(string s) {
	cout << s << endl;
}