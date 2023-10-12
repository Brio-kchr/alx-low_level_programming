#include <stdlib.h>
/**
 * print_name - Function that prints a name
 * @name: name to be printed
 * @f: Pointer to a function that prints a name
 * Description - Function passes a name to a
 * callback to a function that prints name
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
