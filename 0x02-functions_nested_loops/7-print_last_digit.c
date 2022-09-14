#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int 1;

	1 = n % 10;
	if (1 < 0)
	{
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
		_putchar(1 + 48);
		return (1);
	}
}
