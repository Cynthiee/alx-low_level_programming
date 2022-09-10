#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program prints the possible combinations
 * of two two-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = 0; i < 100; m++)
	{
	for (n = 0; < 100; n++)
	{
	if (m < n)
	{
	putchar((m / 10) + 48);
	putchar((m % 10) + 48);
	putchar(' ');
	putchat((n / 10) + 48);
	putchar((n % 10) + 48);
	if (m != 98 || n != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
