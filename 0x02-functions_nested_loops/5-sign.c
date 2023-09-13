#include "main.h"

/**
 * print_sign - Check description
 * @n: An input character
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */

int print_sign(int n)
{
	int print_count;

	if ( n > 0)
	{
		print_count = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		print_count = 1;
		_putchar('0');
	}
	else
	{
		print_count = 0;
		_putchar('-');
	}

	return (print_count);
}
