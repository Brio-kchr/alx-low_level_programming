#include "main.h"

/**
 * print_rev - Check description
 * description - prints a string in reverse
 * @s:  pointer to my string
 * Return: Always zero
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(*(s + i - 1));
		i--;
	}
	_putchar('\n');
}
