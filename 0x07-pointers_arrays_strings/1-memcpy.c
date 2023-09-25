#include "main.h"

/**
 * *_memcpy - cpies n bytes from memory area
 * src to dest
 * @dest: pointer to dest memory area
 * @src: pointer to src memory area
 * @n: bytes of memorey area to be copied
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	int i = 0;
	int j = 0;

	if ((int)n < 0)
		j = -1 * n;
	else
		j = n;

	for (; i < j; i++)
	{
		*dest++ = *src++;
	}
	return (temp);
}
