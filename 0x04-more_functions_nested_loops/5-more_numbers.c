#include "main.h"

/**
 * more_numbers - Prints 0 to 14, 1 times then a newline.
 * Return: Always zero
 */

void more_numbers(void)
{	int i = 0;
	int j = 0;

	for (; j <= 10; j++)
	{
		i = 0;

		for (; i <= 14 ; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
