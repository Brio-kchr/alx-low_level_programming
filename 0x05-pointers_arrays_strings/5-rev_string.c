#include "main.h"

/**
 * rev_string - Check description
 * description - reverses contents in a string
 * @s:  pointer to my string
 * Return: Always zero
 */


void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char cp;
	/*Get the size of the string*/
	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i--)
	{
		cp = s[j];
		s[j++] = s[i];
		s[i] = cp;
	}

	_putchar('\n');
}
