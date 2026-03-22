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

	print("\npositive numbers: ");
	print(to_string(cout_positive_nums(arr, length)));

	return 0;
}