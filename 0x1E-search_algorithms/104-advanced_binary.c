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
 * rec_binary - Recursion for the binary search algorithm.
 * @array: Array to search.
 * @left: Left size of the subarray.
 * @right: Right size of the subarray.
 * @value: Value to search.
 *
 * Return: The index or -1 if it's not found.
 */

int rec_binary(int *array, int left, int right, int value)
{
	int mid;

	if (left <= right)
	{
		mid = left + ((right - left) / 2);
		if (left == right && array[left] == value)
			return (left);
		print_array(&array[left], right + 1 - left);
		if (array[mid] >= value)
			return (rec_binary(&(*array), left, mid, value));
		else
			return (rec_binary(&(*array), mid + 1, right, value));
	}
	return (-1);
}


/**
 * advanced_binary - Search a value with a binary search algorithm.
 * @array: Array to search.
 * @size: Size of the array to search.
 * @value: Value to search.
 *
 * Return: The index or -1 if it's not found.
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (rec_binary(array, 0, size - 1, value));
}


