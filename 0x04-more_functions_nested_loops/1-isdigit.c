#include "main.h"

/**
 * _isdigit - A function that checks if c is a digit(0 - 9).
 * @c:  pointer to my digit
 * Return: Returns 1 if is a digit(0-9) and 0 otherwise
 */

int _isdigit(int c)
{
	int i = 0;

	if (c >= 0 && c <= 9)
		i = 1;
	else
		i = 0;

	return (i);
}
