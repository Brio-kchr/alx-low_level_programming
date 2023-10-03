#include <stdio.h>

/**
 * main - program prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of strings which are arguments
 * passed to the program
 * Return: Exit status of the program
 */

int main(int __attribute__ ((unused))argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argc[i]);
	}
	return (0);
}
