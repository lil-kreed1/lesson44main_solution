#include "logic.h"

bool has_opposite_pair(int arr[SIZE], int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (arr[i] == -arr[j]) {
				return true;
			}
		}
	}
	return false;
}