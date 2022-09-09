#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char fav;

	for (fav = 'a'; fav <= 'z'; fav++)
	{
		putchar(fav);
	}
	putchar('\n');
	return (0);
}
