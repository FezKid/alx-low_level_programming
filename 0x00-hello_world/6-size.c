#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	printf("Size of char: %lu byte\n", sizeof(char));
	printf("Size of int: %lu byte\n", sizeof(int));
	printf("Size of long int: %lu byte\n", sizeof(long int));
	printf("Size of long long int: %lu byte\n", sizeof(long long int));
	printf("Size of float: %lu byte\n", sizeof(float));
	return (0);
}
