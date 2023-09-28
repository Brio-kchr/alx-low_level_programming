#include "main.h"

/**
 * factorial - Gets factorial of an input interger
 * @n: input interger
 * Return: Returns factorial of the input
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
