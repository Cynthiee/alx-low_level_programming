#include <stdio.h>

/**
 * main - program execution starts
 *
 * Description: This program prints out all the letters of the
 * alphabet in lowercase and uppercase plus a new line character.
 *Return: 0 (Success)
*/
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
	putchar('\n')';
	letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
	putchar('\n')';
	letter++;
	}

	putchar('\n')';

	return (0);
}
