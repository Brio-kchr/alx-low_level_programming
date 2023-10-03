#include "main.h"

/**
 * _isdigit - A function that checks if c is a digit(0 - 9).
 * @c:  pointer to my digit
 * Return: Returns 1 if is a digit(0-9) and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
