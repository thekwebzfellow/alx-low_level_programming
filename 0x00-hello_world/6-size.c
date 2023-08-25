#include <stdio.h>

/**
 * main - This is the entry point
 *
 * This function prints the size of various data types.
 *
 * It does not explicitly return value because it has a void return type
 *
 * Return - 0 is successful
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
