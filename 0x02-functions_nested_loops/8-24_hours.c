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

	for (hour2 = 48; hour2 < 51; hour2++)
		for (hour1 = 48; hour1 < 58; hour1++)
			for (min2 = 48; min2 < 54; min2++)
				for (min1 = 48; min1 < 58; min1++)
				{
					_putchar(hour2);
					_putchar(hour1);
					_putchar(':');
					_putchar(min2);
					_putchar(min1);
					_putchar('\n');
				}
		if ((hour2 == 48 ) && (hour1 == 51) && (min2 == 53) && (min1 == 57))
			break;
}
