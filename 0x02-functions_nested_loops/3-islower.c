#include "main.h"

/**
 * _islower - Check description
 * @c: An input character
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */

int _islower(int c)
{
	char count;
	int print_count;


	for (count = 'a'; count <= 'z'; count++)
	{
		if (c == (int)count)
			print_count = 1;
		else
			print_count = 0;
	}
	return (print_count);
}
