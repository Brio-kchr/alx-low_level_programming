#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of strings which are arguments
 * passed to the program
 * Return: Exit status of the program
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
