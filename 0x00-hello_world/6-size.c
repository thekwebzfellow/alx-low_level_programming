#include <stdio.h>

/**
 * main - This is the entry point
 *
 * This function prints the size of various data types
 *
 * Return - 0 is successful
 */

int main(void)
{
	printf("Size of a char: \n", sizeof(char));
	printf("Size of an int: \n", sizeof(int));
	printf("Size of a log int: \n", sizeof(long int));
	printf("Size of a long long int: \n", sizeof(long long int));
	printf("Size of a float: \n", sizeof(float));

	return (0);
}
