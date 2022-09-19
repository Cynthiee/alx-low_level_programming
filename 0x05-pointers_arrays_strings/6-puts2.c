#include <main.h>

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first line character and a new line.
 * @str: input string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
	if (i % 2 == 0)

	_putchar(str[i]);
	i++;
	}
	
	_putchar('\n');
}
