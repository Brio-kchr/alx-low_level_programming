#include "main.h"

/**
 * *_strncat - Check description
 * description - concatenates 2 strings,
 * 2nd string may not need to be null terminated
 * @dest:  first string
 * @src: pointer to second string
 * @n: chars to get from second string
 * Return: Pointer to the resulting string
 */


char *_strncat(char *dest, char *src, int n)
{
	/*Store address of dest pointer*/
	char *j = dest;

	while (*dest != '\0')
		dest++;

	/*Copying value from source to dest*/
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (j);
}
