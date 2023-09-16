#include "main.h"

/**
 * print_last_digit - Check description
 * @c: An input character
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */


int print_last_digit(int c)
{
	long long int n = 0;
	long long int abs = 0;

	if (c < 0)
	{
		abs = -1LL * c;
		n = c % 10;
	}
	else
	{
		n = c % 10;
	}

	_putchar(n + '0');
	return (n);
}
