#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary input
 * Return: unsigned int returned.
 */

unsigned int binary_to_uint(const char *b)
{
	int  i = 0;
	unsigned int dec = 0, sum = 1;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	while (i)
	{
		if (b[i - 1] != '1' && b[i - 1] != '0')
			return (0);
		if (b[i] == '1')
		{
			dec += sum;
		}
		sum *= 2;
		i--;
	}
	return (dec);
}
