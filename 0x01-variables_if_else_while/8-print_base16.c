#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this program prints all the numbers of base 16
 * in lowercase and a newline.
 *
 * Return: 0(success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)

	if (num < 10)
	{
	putchar('0' + num);
	}
	else if (num >= 10)
	{
	putchar('a' + num % 10);
	}
	putchar('\n');

	return (0);
}
