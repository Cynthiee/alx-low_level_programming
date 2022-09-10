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
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(j);
	}

	putchar('\n');

	return (0);
}
