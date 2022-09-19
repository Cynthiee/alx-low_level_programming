#include <main.h>

/**
 * rev_string - a function that reverse a string.
 *  Return: 0
 */

void rev_string(char *s)
{
	int i, j, k;
	char a, b;

	while (s[i] != '\0')
	{
	i++;
	}
	j = i - 1;
	k = j / 2;

	while (k >= 0)
	{
	a = s[j - k];
	k = s[k];
	s[j - k] = b;
	k++;
	}	
}
