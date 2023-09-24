#include "main.h"

/**
 * print_line - Prints 0 to 9 then a newline.
 * @n: number of '_' to print
 * Return: Always zero
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
