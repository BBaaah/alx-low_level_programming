#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 * The entry point of the program
 * This function writes a specific string to the standard output (stdout)
 * Return 1 (Success)
 */
int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, str, 59); /* Using write to print to stdout */
	return (1);
}
