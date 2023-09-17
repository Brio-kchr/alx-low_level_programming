#include "main.h"

/**
 * times_table - Check description
 * Description: prints the 9 times table starting from zero
 * Return: Nothing.
 */


void times_table(void)
{
	int i;
	int j;
	int result = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
			_putchar('0' + result);
			_putchar(',');
		_putchar('\n');
	}
}
