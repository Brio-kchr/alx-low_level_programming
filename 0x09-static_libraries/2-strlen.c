#include "main.h"

/**
 * _strlen - Check description
 * description - Get the length of a string
 * @s:  pointer to my string
 * Return: Returns length of the sring
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
