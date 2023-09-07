#include <stdio.h>
/**
 * main - Prints the size of various params
 *
 * Return: Should always be 0 for success
 */
int main(void)
{
	/*Print the sizes of various params*/
	printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of a int: %d byte(s)\n", (int)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
