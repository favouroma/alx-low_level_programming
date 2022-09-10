#include <stdio.h>

/**
 * main - Entry point
 * autor: favvy
 * Return: Always 0 (Success)
 */
int main(void)
{
	int favvy;

	for (favvy = 48; favvy < 58; favvy++)
	{
		putchar(favvy);
		if (favvy != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
