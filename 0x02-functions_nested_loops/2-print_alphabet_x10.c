#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
		char c = 'a';
			int i = 0;

				for (; i < 10; i++)
						{
									while (c <= 'z')
												{
																_putchar(c);
																			c++;
																					}
											c = 'a';
													_putchar ('\n');
														}
}
