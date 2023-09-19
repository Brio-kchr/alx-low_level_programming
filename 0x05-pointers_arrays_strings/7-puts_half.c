#include "main.h"

/**
 * puts_half - Check description
 * description - print second half of the string
 * @str:  pointer to my string
 * Return: Always zero
 */


void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	/*Get the size of the string*/
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
		j = (i - 1) / 2;
	else
		j = i / 2;

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	/*_putchar('\n');*/
}
