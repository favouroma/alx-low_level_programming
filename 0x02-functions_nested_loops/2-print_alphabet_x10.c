#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int favour, b;

	for (favour = 0; favour <= 9; favour++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
