#include <stdio.h>
/**
 * main - Prog Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char c;

	for (d = 0; d <= 9; d++)
		putchar(d + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
