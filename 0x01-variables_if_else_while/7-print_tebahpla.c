#include <stdio.h>

/**
 * main - Entry point
 * author: favvy
 * Return: Always 0 (Success)
 */
int main(void)
{
	char favvy;

	for (favvy = 'z'; favvy >= 'a'; favvy--)
		putchar(favvy);
	putchar('\n');
	return (0);
}
