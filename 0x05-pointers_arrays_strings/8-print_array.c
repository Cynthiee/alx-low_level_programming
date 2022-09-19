#include <main.h>

/**
 * print_array - afunction that prints n elements of an array
 * of integers.
 * @a: input array
 * @n: input integer
 * Return: 0
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	
	print(",");
	}
	putchar('\n');
}
