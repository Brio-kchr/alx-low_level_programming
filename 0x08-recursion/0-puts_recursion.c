#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline
 * @s: Pointer to the input string
 * Return: Always zero
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
