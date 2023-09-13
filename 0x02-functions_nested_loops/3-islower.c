#include "main.h"

/**
 * _islower - Check description
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */

int _islower(int c)
{
	int count;
	int print_count = 0;


	for (count = 97; count <= 122; count++)
	{
		if (c == count)
			print_count = 1;
		else
			print_count = 0;
	}
	return (print_count);
}
