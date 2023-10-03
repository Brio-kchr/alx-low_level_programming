#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c:  pointer to my char c
 * Return: Returns 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int i = 0;

	if (c >= 65 && c <= 90)
		i = 1;
	else
		i = 0;

	return (i);
}
