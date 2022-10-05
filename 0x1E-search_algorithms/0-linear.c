#include "search_algos.h"


/**
 * linear_search - Search a value with a linear algorithm
 * @array: Array to search.
 * @size: Size of the array to search.
 * @value: Value to search.
 *
 * Return: The index or -1 if it's not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
