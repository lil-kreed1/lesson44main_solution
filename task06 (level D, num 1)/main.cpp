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

	print("pairs: " + to_string(has_opposite_pair(arr, length)));

	return 0;
}