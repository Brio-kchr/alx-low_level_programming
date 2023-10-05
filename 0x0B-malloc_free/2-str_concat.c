#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_str_concat - Concatenates two strings
 * @s1: First string to be cocatenated
 * @s2: Second string to be concatenated
 * Return: Returns pointer to a newly allocated
 * space in memory where concatenated .string has been copied
 */

char *str_concat(char *s1, char *s2)
{
	char *temp, *start;
	int len = 0;
	int i = 0;

	len = strlen(s1) + strlen(s2);
	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
		return (NULL);
	start = temp;
	while (*s1 != '\0')
		temp[i++] = *s1++;
	while (*s2 != '\0')
		temp[i++] = *s2++;
	temp[i] = '\0';
	return (start);
}
