#include "main.h"

/**
 * _isalpha - Check description
 * @c: An input character
 * Description: checks whether char is lowercase
 * Return: Nothing.
 */

int _isalpha(int c)
{

	int print_count;

	if ((c <= 122 && c >= 97) || (c < 91 && c > 64))
	{
		print_count = 1;
	}
	else
	{
		print_count = 0;
	}
	return (print_count);
}
