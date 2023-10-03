#include "main.h"

/**
 * *_strcat - Check description
 * description - concatenates 2 strings
 * @dest:  pointer to the destination
 * @src: pointer to source string
 * Return: Pointer to the first address of dest
 */


char *_strcat(char *dest, char *src)
{
	/*Store address of dest pointer*/
	char *j = dest;

	while (*dest != '\0')
		dest++;

	/*Copying value from source to dest*/
	while (*src)
	{
		*dest++ = *src++;
	}

	return (j);
}
