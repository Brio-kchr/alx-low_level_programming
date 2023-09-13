#include "main.h"

/**
 * print_last_digit - Check description
 * @c: An input character
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */


int print_last_digit(int c)
{
	int n = 0;

	if (c < 0)
		c = -1 * c;
		n = c % 10;
	else
		n = c % 10;


	_putchar(n + '0');
	return (n);
}
