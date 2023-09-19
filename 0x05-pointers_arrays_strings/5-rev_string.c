#include "main.h"

/**
 * rev_string - Check description
 * description - reverses contents in a string
 * @s:  pointer to my string
 * Return: Always zero
 */


void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char cp[];

	while (*(s + i) != '\0')
	{
		cp[i] = *(s + i);
		i++;
	}
	while (i > 0)
	{
		*(s + j) = cp[i - 1];
		i--;
	}

	_putchar('\n');
}
