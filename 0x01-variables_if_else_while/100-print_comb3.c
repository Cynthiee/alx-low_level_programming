#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program prints all possible different combinations
 * of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m < 9; m++)
	{
	for (n = (m + 1); n <= 9; n++)
	{
	putchar('0' + m);
	putchar('0' + n);

	if (m < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
