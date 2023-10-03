#include "main.h"
#include "stddef.h"
/**
 * *_strchr - gets first occurence of char c
 * in a string or NULL if not found
 * @s: input string
 * @c: charcater to be located
 * Return: pointer to first occurence of char c
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;
	char *temp = s;

	while (*s++)
		j++;

	s = temp;

	for (; i < j; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
