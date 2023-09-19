#include "main.h"
#include <stdio.h>
/**
 * print_array - Check description
 * description - print an array of intergers
 * @a:  pointer to my array
 * @n: array size
 * Return: Always zero
 */


void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
			printf(", ");
	}
	putchar('\n');
}
