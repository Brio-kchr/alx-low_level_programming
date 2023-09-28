#include "main.h"

/**
 * _pow_recursion - Returns value of x^y
 * @x: Number to be raised to power y
 * @y: Power to raise
 * Return: Returns x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(y - 1));
}
