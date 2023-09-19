#include "main.h"

/**
 * swap_int - Check description
 * description - Swap values of two intergers
 * @a:  pointer to the first variable
 * @b:  pointer to second variable
 * Return : Always zero
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
