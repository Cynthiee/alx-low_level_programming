#include <stdio.h>

/**
 * main - entry point
 * Description: this is a program that prints the lowercase alphabet
 * in reverse and prints a newline.
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}
	putchar('\n)';

	return (0);
}
