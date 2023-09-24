#include "main.h"

/**
 * more_numbers - Prints 0 to 14, 1 times then a newline.
 * Return: Always zero
 */

void more_numbers(void)
{	int i = 48;
	int j = 10;

	for (; j <= 10; j++)
	{
		for (; i < 63; i++)
			_putchar(i);
		_putchar('\n');
	}
}
