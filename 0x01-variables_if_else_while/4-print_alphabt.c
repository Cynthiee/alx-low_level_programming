#include <stdio.h>

/**
 * main - entry point
 *
 * Description: This prints out all the letters of the alphabet
 * and prints a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'q' && i != 'e')
	putchar(i);
	}
	putchar('\n');

	return (0);
}
