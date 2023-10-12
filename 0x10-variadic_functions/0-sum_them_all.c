#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: First parameter, indicates number of
 * params supplied
 * Return: returns the sum of all params passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
