#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int jasper, alx, op;

	for (jasper = 0; jasper <= 9; jasper++)
	{
		_putchar(48);
		for (alx = 1; alx <= 9; alx++)
		{
			op = jasper * alx;
			_putchar (44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
