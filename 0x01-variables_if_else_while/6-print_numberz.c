#include <stdio.h>

/**
 * main - emtry point
 *
 * Description: This program prints all single digit numbers
 * of base 10 starting from 0, and a newline.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
