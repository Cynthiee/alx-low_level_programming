#include <stdio.h>

/**
 * main - program execution begins here
 *
 * Description: This program prints out all the lettters of the
 * alphabet and then prints out a newline character.
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
