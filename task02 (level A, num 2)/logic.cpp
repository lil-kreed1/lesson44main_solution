#include "logic.h"

int cout_positive_nums(int arr[SIZE], int length) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (i > 0) {
			count++;
		}
	}
	return count;
}