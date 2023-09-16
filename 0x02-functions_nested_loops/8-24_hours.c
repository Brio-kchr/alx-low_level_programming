#include "main.h"

/**
 * jack_bauer - Check description
 * Description: Diplay all minutes to 23:59
 * Return: Nothing.
 */

void jack_bauer(void)
{
	int min1;
	int min2;
	int hour1;
	int hour2;

	for (hour2 = 0; hour2 < 3; hour2++)
		for (hour1 = 0; hour1 < 10; hour1++)
			for (min2 = 0; min2 < 7; min2)
				for (min1 = 0; min1 < 10; min1++)
				{
					_putchar(hour2);
					_putchar(hour1);
					_putchar(":");
					_putchar(min2);
					_putchar(min1);
					_putchar("\n");
				}
}
