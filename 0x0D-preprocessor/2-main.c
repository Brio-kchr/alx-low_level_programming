#include <stdio.h>

/**
 * main - Prints the name of the file it was
 * compiled from followed by a newline
 * Return: Always zero for success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
