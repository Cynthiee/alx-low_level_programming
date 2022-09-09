#include <stdio.h>

/**
 * main - entry into the program
 *
 *  Description: prints the size of the different types of C
 *  to the terminal depending on the system
 *  Return: 0 (Success)
 *
 */ 
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	
	return (0);
}