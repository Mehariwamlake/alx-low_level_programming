#include"main.h"
/**
 *  * print_alphabet - function that prints the alphabet, lowercase
 *   * You can only use _putchar twice in your code
 *    * Return: nothing.
 *     */

void print_alphabet(void)
{
		int ch;

			for (ch = 'a'; ch <= 'z'; ++ch)
						_putchar(ch);
				_putchar('\n');
}
