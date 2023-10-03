#include "main.h"

/**
 * *_strcpy - Check description
 * description - copies a string from one
 * array to another destination
 * @dest:  pointer to the destination
 * @src: array size
 * Return: Pointer to the first address of dest
 */


char *_strcpy(char *dest, char *src)
{
	/*Store address of dest pointer*/
	char *j = dest;

	/*Copying value frm source to dest*/
	while (*src)
		*dest++ = *src++;

	return (j);
}
