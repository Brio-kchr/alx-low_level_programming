#include "main.h"

/**
 * reverse_array - Check description
 * description - Reterns reverse of input array
 * @a: input array to be reversed
 * @n: size of the array
 * Return: Always zero
 */


void reverse_array(int *a, int n)
{
	int j = 0;
	int i;

	while (j < --n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n] = i;
	}
}
