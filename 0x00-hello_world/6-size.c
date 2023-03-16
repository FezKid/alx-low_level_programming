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
	printf("Size of char: %u byte\n", sizeof(char));
	printf("Size of int: %u byte\n", sizeof(int));
	printf("Size of long int: %u byte\n", sizeof(long int));
	printf("Size of long long int: %u byte\n", sizeof(long long int));
	printf("Size of float: %u byte\n", sizeof(float));
	return (0);
}
