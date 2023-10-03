#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of strings which are arguments
 * passed to the program
 * Return: Exit status of the program
 */

int main(int argc, char *argv[])
{
	int i;
	int x = 0;
	int sum = 0;

	if (argc > 1)
	{
		argv++;
		for (i = 1; i < argc; i++)
		{
			x = strtol(*argv, NULL, 10);
			if (x == 0)
			{
				if (**argv != '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += x;
			argv++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
