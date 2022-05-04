#include "main.h"

/**
 * flip_bits - number of bits needed to flip one number to another
 * @n: character
 * @m: second character
 *
 * Return: number at index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int len = 0;

	while (a)
	{
		if (a & 1)
			len++;
		a >>= 1;
	}
	return (len);
}
