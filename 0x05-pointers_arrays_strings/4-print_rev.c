#include <main.h>

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by an new line.
 * @s: an input string
 * Return: 0.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	
	while (len)
	{
	_putchar(s[--len]);
	}

	_putchar('\n');

	return (0);
}
