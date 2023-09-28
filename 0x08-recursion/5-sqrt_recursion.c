#include "main.h"
int _sqrt(int x, int n);

/**
 * _sqrt_recursion - Gets the natural square root of input
 * @n: Number to get square root
 * Return: Natural square root of input
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - Gets square root of n
 * @x: Variable for repeated substraction
 * @n: Remainder after subtraction
 * Return: The natural square root of n
 */

int _sqrt(int x, int n)
{
	n = n - x;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (_sqrt((x + 2), n));
}
