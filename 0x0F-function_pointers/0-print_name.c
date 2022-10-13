<<<<<<< HEAD
#include <stdlib.h>
#include "function_pointers"

=======
>>>>>>> 4bd4da89a806866166af713b0a1c49a3e7cec144
/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
