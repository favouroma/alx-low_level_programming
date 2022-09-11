#include <stdio.h>

/**
 * main - Entry point
 * author: favour
 * Return: Always 0 (Success)
 */
int main(void)
{
	char favvy;

	for (favvy = 'a'; favvy <= 'z'; favvy++)
	{
		if (favvy != 'q' && favvy != 'e')
			putchar(favvy);
	}
	putchar('\n');
	return (0);
}
