#include "logic.h"

int cout_elements(int arr[SIZE], int length, int n) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < n) {
			count++;
		}
	}
	return count;
}