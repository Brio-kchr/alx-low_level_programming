#include "main.h"

/**
 * print_most_
 * numbers - Prints 0 to 9 then a newline.
 * do not print 2 and 4
 * Return: Always zero
 */

void print_most_numbers(void)
{	int i = 48;

	for (; i < 58; i++)
	{
		if (i == 52 || i == 50)
			;
		else
			_putchar(i);
	}
	_putchar('\n');
}
