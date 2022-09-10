#include <stdio.h>
/**
 * main - entry point
 *
 * Description: this program prints all possible different combinations
 * of three digits.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m < 8; m++)
	{
	for (n = (m + 1); n <= 8; n++)
	{
	for (o = (n + 1); 0 <= 9; 0++)
	{
	putchar('0' + m);
	putchar('0' + n);
	putchar('0' + o);

	if (m < 7)
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
