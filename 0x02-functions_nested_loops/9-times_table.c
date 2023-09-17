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
		{
			result = i * j;
			if (result <= 9)
			{
				_putchar('0' + result);

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
