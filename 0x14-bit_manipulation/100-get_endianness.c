#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: void function
 */
int get_endianness(void)
{
	unsigned int n = 1;


	if (*(char *) &n == 1)
		return (1);
	return (0);
}
