#include "logic.h"

int cout_even_nums(int arr[SIZE], int length) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0) {
			count++;
		}
	}
	return count;
}