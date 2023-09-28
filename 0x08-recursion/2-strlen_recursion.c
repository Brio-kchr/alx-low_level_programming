#include "main.h"

/**
 * _strlen_recursion - Gets the length of a string
 * @s: Pointer to the input string
 * Return: Returns length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _puts_recursion(++s));
}
