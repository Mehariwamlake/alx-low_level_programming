#include "search_algos.h"


/**
 * print_array - Print the array to search.
 * @start: First element to the subarray.
 * @end: Index of the end of the subarray.
 *
 * Return: void.
 */

void print_array(int *start, int end)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = 0; i < end - 1; i++)
	{
		printf("%d, ", start[i]);
	}
	printf("%d\n", start[i]);
}


/**
 * binary_search - Search a value with a binary algorithm
 * @array: Array to search.
 * @size: Size of the array to search.
 * @value: Value to search.
 *
 * Return: The index or -1 if it's not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;

	while (left <= right)
	{
		mid = left + ((right - left) / 2);
		print_array(&array[left], right + 1 - left);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
