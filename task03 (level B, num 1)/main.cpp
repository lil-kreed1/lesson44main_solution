#include "util.h"

int main() {
	int arr[SIZE];
	int length;
	int n;

	cout << "input number: ";
	cin >> n;

	do {
		system("cls");
		cout << "input the size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(arr, length);

	print("\nless than n: ");
	print(to_string(cout_elements(arr, length, n)));

	return 0;
}