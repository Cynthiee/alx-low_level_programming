#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: The name to print
 * @f: pointer to the printing function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
