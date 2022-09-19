#include <main.h>

/**
 * swap_int - a function that swaps the value of
 * two integers.
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b =aux;
}
