#include <stdio.h>

/**
 * main - program prints its name followed
 * by a new line
 * @argc: Number of arguments
 * @argv: Array of strings which are arguments
 * passed to the program
 * Return: Exit status of the program
 */

int main(int argc, char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
