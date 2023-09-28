#include "main.h"
int _prime(int x, int n);
/**
 * is_prime_number - Checks if number is prime
 * @n: Number to be checked if its prime
 * Return: Returns 1 if input is prime
 * or 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(2, n));
}

/**
 * _prime - checks if n is prime recursively
 * @x: Guess value to check if n is divisible
 * x is between 2 to n-1
 * @n: Number to check if prime
 * Return: Returns 1 if prime
 */

int _prime(int x, int n)
{
	if (n == x)
		return (1);

	/*Base case*/
	if (n % x == 0)
		return (0);

	x++;
	_prime(x, n);
}
