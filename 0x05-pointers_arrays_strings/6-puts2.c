#include "main.h"

/**
 * puts2 - Check description
 * description - print every character in string
 * @str:  pointer to my string
 * Return: Always zero
 */


void puts2(char *str)
{
	int i = 0;
	int j = 0;
	/*Get the size of the string*/
	while (str[i] != '\0')
	{
		i++;
	}

	for (; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
