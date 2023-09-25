#include "main.h"

/**
 * *_memset - fills first n bytes of memory area
 * pointed to by s with constant byte b
 * @s: pointer to memory area
 * @b: constant byte to be copied
 * @n: bytes of memorey area to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	for (int i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (temp);
}
