#include "main.h"

/**
 * main - print_alphabet
 * Description: It prints the alphabet in lowercase followed by a new line
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
