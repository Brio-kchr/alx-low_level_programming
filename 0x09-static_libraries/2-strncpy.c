#include "main.h"

/**
 * *_strncpy - Check description
 * description - copies string to a bufffer
 * @dest:  string buffer
 * @src: pointer to source of string
 * @n: size to be copied
 * Return: Pointer to the first address of buffer
 */


char *_strncpy(char *dest, char *src, int n)
{
	/*Store address of dest pointer*/
	char *j = dest;
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (j);
}
