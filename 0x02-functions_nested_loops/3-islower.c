#include "main.h"

/**
 * _islower - Check description
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */

int _islower(int c)
{
	char count;
	int print_count = 0;


	for (count = 'a'; count <= 'z'; count++)
	{
		if (c == count)
			print_count = 1;
		else
			print_count = 0;
	}
	return (print_count);
}
