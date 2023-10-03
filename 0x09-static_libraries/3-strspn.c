#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: bytes to be checked in substring
 * Return: number of bytes in the initial segment
 * of s which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *temp = accept;

	while (*s <= 'z' && *s >= 'a')
	{
		while (*accept)
		{
			if (*s == *accept)
				i++;
			accept++;
		}
		if (*s == *accept)
			i++;
		accept = temp;
		s++;
	}

	return (i);
}
