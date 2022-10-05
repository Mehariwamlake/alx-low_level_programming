#include "search_algos.h"

/**
 * interpolation_search - Search a value with a interpolation search algorithm.
 * @array: Array to search.
 * @size: Size of the array to search.
 * @value: Value to search.
 *
 * Return: The index or -1 if it's not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, pos;

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		if (pos >= (int)size || pos < 0)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
