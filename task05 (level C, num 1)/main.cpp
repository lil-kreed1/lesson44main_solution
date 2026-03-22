#include "util.h"

int main() {
	int arr[SIZE];
	int length;

	do {
		system("cls");
		cout << "input the size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(arr, length);

	print("result: " + to_string(cout_elements(arr, length)));

	return 0;
}