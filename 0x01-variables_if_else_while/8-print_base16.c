#include <stdio.h>

/**
 * main - Entry point
 * author: favvy
 * Return: Always 0 (Success)
 */
int main(void)
{
	int favvy;
	char john;

	for (favvy = 48; favvy < 58; favvy++)
		putchar(favvy);
	for (john = 'a'; john <= 'f'; john++)
		putchar(john);
	putchar('\n');
	return (0);
}
