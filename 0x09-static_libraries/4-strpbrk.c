#include "main.h"
#include "stdio.h"

/**
 * *_strpbrk - searches a string for a set of bytes
 * @s: string to be checked
 * @accept: bytes to be checked in string
 * Return: returns a pointer to the byte in s that
 * matches any byte in accept or NULL if no such byte
 * is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = temp;
		s++;
	}
	return (NULL);
}
