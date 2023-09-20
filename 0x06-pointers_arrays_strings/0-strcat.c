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
	int i = 0;

	while (src[i] != '\0')
		i++;

	/*Copying value frm source to dest*/
	while (*src)
		*(dest + i)++ = *src++;

	return (j);
}
