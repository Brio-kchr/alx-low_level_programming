#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - copies a string given as a parameter
 * to a newly allocated space in memory
 * @str: String to be copied to memory
 * Return: Returns pointer to a newly allocated
 * space in memory where string has been copied
 */


char *_strdup(char *str)
{
	char *temp;
	int len = 0;
	if (str == NULL)
		return (NULL);

	len = strlen(str);
	temp = malloc(sizeof(*str) * len);
	if (temp == NULL)
		return (NULL);
	temp = str;
	return (temp);
}
