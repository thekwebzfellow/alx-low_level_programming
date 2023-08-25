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
	printf("Size of a char: %c \n", sizeof(char));
	printf("Size of an int: %d \n", sizeof(int));
	printf("Size of a log int: %1ld \n", sizeof(long int));
	printf("Size of a long long int: %1lld \n", sizeof(long long int));
	printf("Size of a float: %1f \n", sizeof(float));

	return (0);
}
