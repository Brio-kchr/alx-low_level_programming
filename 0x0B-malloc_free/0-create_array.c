#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Cretaes an array of chars
 * and intializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: Returns pointer to the array or NULL
 * if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	temp = malloc(sizeof(c) * size);
	if (temp == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		temp[i] = c;
	}
	return (temp);
	free(temp);
}
