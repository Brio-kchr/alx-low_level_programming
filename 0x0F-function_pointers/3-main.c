#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check description
 * @argc: number of argumets
 * @argv: vector storing arguments
 * Description - Program that performs simple
 * operations
 * Return: Returns result of the operation done by user
 */

int main(int argc, char *argv[])
{
	int (*temp)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	temp = get_op_func(*(argv + 2));
	if (temp == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n",temp(atoi(*(argv + 1)), atoi(*(argv + 3))));
	return (0);
}
