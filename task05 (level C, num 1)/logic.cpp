#include "logic.h"

double calculate_geo_mean(int arr[SIZE], int length) {
	if (length == 0) {
		return 0;
	}

	long long product = 1;

	for (int i = 0; i < length; i++)
	{
		product *= arr[i];
	}
	return pow(product, 1.0 / length);
}

int cout_elements(int arr[SIZE], int length) {
	double geo_mean = calculate_geo_mean(arr, length);

	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > geo_mean) {
			count++;
		}
	}
	return count;
}