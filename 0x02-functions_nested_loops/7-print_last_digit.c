#include "main.h"

/**
 * print_last_digit - Check description
 * @c: An input character
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */


int print_last_digit(int c)
{
	long int n = 0;
	long int abs = 0;

	if (c < 0)
	{
		abs = -1L * c;
		n = abs % 10;
	}
	else
	{
		n = c % 10;
	}

	_putchar(n + '0');
	return (n);
}
