#include "main.h"

/**
 * _is lower - Short description, single line
 * @c: contains value to becompared
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
