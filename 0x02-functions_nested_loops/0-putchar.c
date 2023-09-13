#include <stdio.h>

/**
 * main - Entry into the program
 * Program prints _putchar to stdout
 * Return: Returns zero to indicate success
 */
int print_str(char arr[])
{	
	int d = 0;

        for(d=0 ;arr[d] != '\0' ; d++)
	{
		putchar(arr[d]);
	}
	putchar('\n');

        return (0);
}
